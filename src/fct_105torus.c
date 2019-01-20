/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** 105torus
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

void bisection_method(var_t var)
{
    double a = 0;
    double b = 1;
    double c = 0;
    double x = 0;

    for (int count = 0; count < 309; count++) {
        c = (a + b) / 2;
        if (round(c * pow(10, var.n)) == round(x * pow(10, var.n)))
            return;
        if ((image_of(var, a) * image_of(var, c)) < 0)
            b = c;
        else
            a = c;
        count > var.n ? printf("x = %.*f\n", var.n, c) :
            printf("x = %.*g\n", var.n, c);
        x = c;
    }
}

void newton_method(var_t var)
{
    double xn = 0.5;
    double xnn = 0;

    printf("x = %.*g\n", var.n, xn);
    for (int count = 0; count < 309; count++) {
        xnn = xn - (image_of(var, xn) / d_image_of(var, xn));
        if (round(xn * pow(10, var.n)) == round(xnn * pow(10, var.n)))
            return;
        xn = xnn;
        printf("x = %.*f\n", var.n, xn);
    }
}

void secant_method(var_t var)
{
    double xn = 1;
    double xnn = 0;
    double x = 0;

    for (int count = 0; count < 309; count++) {
        xnn = xn - (image_of(var, xn)) / (fct_secant(var, xn, x));
        if (round(xn * pow(12, var.n)) == round(xnn * pow(12, var.n)))
            return;
        x = xn;
        xn = xnn;
        count > 1 ? printf("x = %.*f\n", var.n, xn) :
            printf("x = %.*g\n", var.n, xn);
    }
}

int error_handling(char *params)
{
    int count = 0;

    if (params[0] == '-')
        count++;
    while (params[count] != '\0') {
        if (params[count] < 48 || params[count] > 57)
            return (84);
        count++;
    }
    return (0);
}

int fct_105torus(char **param)
{
    int count = 0;
    int index = atoi(param[0]);
    var_t var;

    for (int point = 0; param[point] != NULL; point++) {
        count = error_handling(param[point]);
        if (count == 84)
            return (84);
    }
    if (index < 1 || index > 3)
        return (84);
    var = fill_struct(param);
    if (index == 1)
        bisection_method(var);
    else if (index == 2)
        newton_method(var);
    else
        secant_method(var);
    return (0);
}
