/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include "struct.h"

void my_putchar(char c);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_isneg(int nb);

int my_put_nbr(int nb);

int my_getnbr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_commute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

void my_swap(int *a, int *b);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

char *my_strdup(char const *src);

void my_putnbr_base(int nb, char const *base);

void my_putunsigned_nbr(unsigned int nb);

int my_printf(char *str, ...);

int usage(void);

void clean_string(char *str);

int fct_105torus(char **param);

double d_image_of(var_t var, double inter);

double image_of(var_t var, double inter);

double fct_secant(var_t var, double xn, double x);

var_t fill_struct(char **param);

void newton_method(var_t var);

void secant_method(var_t var);

void bisection_method(var_t var);

int error_handling(char *params);

#endif
