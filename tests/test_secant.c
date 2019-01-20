/*
** EPITECH PROJECT, 2019
** test_secant.c
** File description:
** unit test for  secant method in 105torus
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/struct.h"

void redirect_std_all_two(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(secant_method, n_eq_one, .init= redirect_std_all_two)
{
    var_t var;

    var.a0 = atof("-1");
    var.a1 = atof("0");
    var.a2 = atof("6");
    var.a3 = atof("-5");
    var.a4 = atof("1");
    var.n = atof("1");
    secant_method(var);
    fflush(NULL);
    cr_assert_stdout_eq_str("x = 0.5\n");
}

Test(secant_method, n_eq_six, .init= redirect_std_all_two)
{
    var_t var;

    var.a0 = atof("-1");
    var.a1 = atof("0");
    var.a2 = atof("6");
    var.a3 = atof("-5");
    var.a4 = atof("1");
    var.n = atof("6");
    secant_method(var);
    fflush(NULL);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.529412\nx = 0.522749\nx = 0.522740\n");
}

Test(secant_method, print_limit, .init =cr_redirect_stdout)
{
    int fd = open("tests/secant.txt", O_RDONLY);
    int size = 0;
    char buff[4598];
    var_t var;

    size = read(fd, buff, 4598);
    buff[size] = 0;
    var.a0 = atof("2");
    var.a1 = atof("3");
    var.a2 = atof("4");
    var.a3 = atof("5");
    var.a4 = atof("6");
    var.n = atof("7");
    secant_method(var);
    fflush(NULL);
    cr_assert_stdout_eq_str(buff);
}

Test(secant_method, print_n_eq_zero, .init = cr_redirect_stdout)
{
    var_t var;

    var.a0 = atof("2");
    var.a1 = atof("3");
    var.a2 = atof("4");
    var.a3 = atof("5");
    var.a4 = atof("6");
    var.n = atof("0");
    secant_method(var);
    fflush(NULL);
    cr_assert_stdout_eq_str("x = -0.1\n");
}
