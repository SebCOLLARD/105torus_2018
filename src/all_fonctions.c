/*
** EPITECH PROJECT, 2019
** all_fonctions
** File description:
** all_fonctions
*/

#include <stdlib.h>
#include <math.h>
#include "struct.h"
#include "my.h"

double d_image_of(var_t var, double inter)
{
    return ((4 * var.a4 * pow(inter, 3)) + (3 * var.a3 * pow(inter, 2)) +
            (2 * var.a2 * inter) + var.a1);
}

double image_of(var_t var, double inter)
{
    return (var.a4 * pow(inter, 4) + var.a3 * pow(inter, 3) +
            var.a2 * pow(inter, 2) + var.a1 * pow(inter, 1) + var.a0);
}

double fct_secant(var_t var, double xn, double x)
{
    return ((image_of(var, xn) - image_of(var, x)) / (xn - x));
}

var_t fill_struct(char **param)
{
    var_t var;

    var.a0 = atof(param[1]);
    var.a1 = atof(param[2]);
    var.a2 = atof(param[3]);
    var.a3 = atof(param[4]);
    var.a4 = atof(param[5]);
    var.n = atof(param[6]);
    return (var);
}
