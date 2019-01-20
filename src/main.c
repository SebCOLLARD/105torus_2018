/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0'))
        usage();
    else if (ac == 8)
        return (fct_105torus(&av[1]) == 84 ? 84 : 0);
    else
        return (84);
    return (0);
}
