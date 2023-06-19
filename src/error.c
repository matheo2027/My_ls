/*
** EPITECH PROJECT, 2022
** gestion d'erreur
** File description:
** gestion d'erreur
*/

#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int my_strlen(char const *str);
int mini_printf(const char *format, ...);

int error(const char *dir)
{
    DIR *dh = opendir(dir);
    if (!dh) {
        write(2, "my_ls: cannot access '", 23);
        write(2, dir, my_strlen(dir));
        write(2, "': No such file or directory", 29);
        mini_printf("\n");
        exit(EXIT_FAILURE);
        return (84);
    }
    return (0);
}
