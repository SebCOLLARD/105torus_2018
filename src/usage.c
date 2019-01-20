/*
** EPITECH PROJECT, 2018
** usage
** File description:
** all usages fonctions
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "my.h"

int usage(void)
{
    struct stat sb;
    stat("usage.txt", &sb);
    int size = sb.st_size;
    int opp = open("usage.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) * (size + 1));

    read(opp, buffer, size);
    write(1, buffer, size);
    close(opp);
    free(buffer);
    return (0);
}
