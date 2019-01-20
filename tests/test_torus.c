/*
** EPITECH PROJECT, 2019
** test_torus.c
** File description:
** unit test for no calcul function in 105torus
*/

#include <criterion/criterion.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include "../include/struct.h"

Test(usage, return_zero)
{
    int usg = usage();

    cr_assert_eq(usg, 0);
}

Test(error_handling, letter_parm)
{
    int ok = error_handling(strdup("\\"));
    int ok2 = error_handling(strdup(";"));

    cr_assert_eq(ok, 84);
    cr_assert_eq(ok2, 84);
}

Test(fct_105torus, letter_params_two)
{
    cr_assert_eq(error_handling(strdup("asdfghuhb")), 84);;
    cr_assert_eq(error_handling(strdup("ù$")), 84);
    cr_assert_eq(error_handling(strdup(">|")), 84);
    cr_assert_eq(error_handling(strdup("#")), 84);
    cr_assert_eq(error_handling(strdup("{")), 84);
    cr_assert_eq(error_handling(strdup("&(")), 84);
    cr_assert_eq(error_handling(strdup("()()(")), 84);
}


Test(fct_105torus, return_err_four)
{
    char **params = malloc(sizeof(char *) * 8);
    int fct = 0;

    params[0] = strdup("123");
    params[1] = strdup("1");
    params[2] = strdup("1");
    params[3] = strdup("1");
    params[4] = strdup("1");
    params[5] = strdup("1");
    params[6] = strdup("0");
    params[7] = NULL;
    fct = fct_105torus(params);
    fflush(NULL);
    cr_assert_eq(fct, 84);
}

Test(error_handling, return_zero)
{
    int ok = error_handling("1");

    cr_assert_eq(ok, 0);
}

Test(error_handling, return_zero_two)
{
    int ok = error_handling("-1");

    cr_assert_eq(ok, 0);
}

Test(fct_105torus, return_zero)
{
    char **params = malloc(sizeof(char *) * 8);
    int fct = 0;

    params[0] = strdup("1");
    params[1] = strdup("1");
    params[2] = strdup("1");
    params[3] = strdup("1");
    params[4] = strdup("1");
    params[5] = strdup("1");
    params[6] = strdup("0");
    params[7] = NULL;
    fct = fct_105torus(params);
    fflush(NULL);
    cr_assert_eq(fct, 0);
}

Test(fct_105torus, return_err)
{
    char **params = malloc(sizeof(char *) * 8);
    int fct = 0;

    params[0] = strdup("0");
    params[1] = strdup("1");
    params[2] = strdup("1");
    params[3] = strdup("1");
    params[4] = strdup("1");
    params[5] = strdup("1");
    params[6] = strdup("0");
    params[7] = NULL;
    fct = fct_105torus(params);
    fflush(NULL);
    cr_assert_eq(fct, 84);
}

Test(fct_105torus, return_zero_two)
{
    char **params = malloc(sizeof(char *) * 8);
    int fct = 0;

    params[0] = strdup("2");
    params[1] = strdup("1");
    params[2] = strdup("1");
    params[3] = strdup("1");
    params[4] = strdup("1");
    params[5] = strdup("1");
    params[6] = strdup("0");
    params[7] = NULL;
    fct = fct_105torus(params);
    fflush(NULL);
    cr_assert_eq(fct, 0);
}

Test(fct_105torus, return_zero_three)
{
    char **params = malloc(sizeof(char *) * 8);
    int fct = 0;

    params[0] = strdup("3");
    params[1] = strdup("1");
    params[2] = strdup("1");
    params[3] = strdup("1");
    params[4] = strdup("1");
    params[5] = strdup("1");
    params[6] = strdup("0");
    params[7] = NULL;
    fct = fct_105torus(params);
    fflush(NULL);
    cr_assert_eq(fct, 0);
}

Test(fct_105torus, return_err_two)
{
    char **params = malloc(sizeof(char *) * 8);
    int fct = 0;

    params[0] = strdup("AZ");
    params[1] = strdup("A");
    params[2] = strdup("D");
    params[3] = strdup("C");
    params[4] = strdup("AZZA");
    params[5] = strdup("CF");
    params[6] = strdup("E");
    params[7] = NULL;
    fct = fct_105torus(params);
    fflush(NULL);
    cr_assert_eq(fct, 84);
}

Test(fill_struct, return_struct)
{
    char **params = malloc(sizeof(char *) * 8);
    var_t var;

    params[0] = strdup("1");
    params[1] = strdup("3");
    params[2] = strdup("-6");
    params[3] = strdup("0");
    params[4] = strdup("2");
    params[5] = strdup("-1");
    params[6] = strdup("0");
    params[7] = NULL;
    var = fill_struct(params);
    cr_assert_eq(var.a0, 3);
    cr_assert_eq(var.a1, -6);
    cr_assert_eq(var.a2, 0);
    cr_assert_eq(var.a3, 2);
    cr_assert_eq(var.a4, -1);
    cr_assert_eq(var.n, 0);
}

Test(image_of, return_neg_one)
{
    var_t var;
    double img = 0;

    var.a0 = atof("-1");
    var.a1 = atof("0");
    var.a2 = atof("6");
    var.a3 = atof("-5");
    var.a4 = atof("1");
    var.n = atof("0");
    img = image_of(var, 2);
    cr_assert_eq(img, -1, "img = %lf\n", img);
}

Test(d_image_of, return_neg_two)
{
    var_t var;
    double img = 0;

    var.a0 = atof("-1");
    var.a1 = atof("0");
    var.a2 = atof("6");
    var.a3 = atof("-5");
    var.a4 = atof("1");
    var.n = atof("0");
    img = d_image_of(var, 2);
    cr_assert_eq(img, -4, "img = %lf\n", img);
}
