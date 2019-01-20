/*
** EPITECH PROJECT, 2019
** test_bisection.h
** File description:
** unit test for the bisection method
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/struct.h"

void redirect_std_all(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(bisection_method, n_eq_zero, .init= redirect_std_all)
{
    var_t var;

    var.a0 = atof("-1");
    var.a1 = atof("0");
    var.a2 = atof("6");
    var.a3 = atof("-5");
    var.a4 = atof("1");
    var.n = atof("0");
    bisection_method(var);
    fflush(NULL);
    cr_assert_stdout_eq_str("x = 0.5\n");
}

Test(bisection_method, n_eq_one, .init = redirect_std_all)
{
    var_t var;

    var.a0 = atof("-1");
    var.a1 = atof("0");
    var.a2 = atof("6");
    var.a3 = atof("-5");
    var.a4 = atof("1");
    var.n = atof("1");
    bisection_method(var);
    fflush(NULL);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.8\nx = 0.6\n");
}

Test(bisection_method, n_eq_six, .init = redirect_std_all)
{
    var_t var;

    var.a0 = atof("-1");
    var.a1 = atof("0");
    var.a2 = atof("6");
    var.a3 = atof("-5");
    var.a4 = atof("1");
    var.n = atof("6");
    bisection_method(var);
    fflush(NULL);
    cr_assert_stdout_eq_str(
        "x = 0.5\nx = 0.75\nx = 0.625\nx = 0.5625\nx = 0.53125\nx = 0.515625\nx = 0.523438\nx = 0.519531\nx = 0.521484\nx = 0.522461\nx = 0.522949\nx = 0.522705\nx = 0.522827\nx = 0.522766\nx = 0.522736\nx = 0.522751\nx = 0.522743\nx = 0.522739\nx = 0.522741\nx = 0.522740\n");
}
