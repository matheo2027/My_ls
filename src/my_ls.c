/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** recréer la fonction ls (la base sans les flags)
*/

#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int error(const char *dir);
int mini_printf(const char *format, ...);

int execute_ls(const char *dir)
{
    struct dirent *d;
    DIR *dh = opendir(dir);
    if (!dh) {
        error(dir);
    }
    while ((d = readdir(dh)) != NULL){
        if (d->d_name[0] == '.') {
            continue;
            mini_printf("%s ", d->d_name);
        } else {
            mini_printf("%s ", d->d_name);
        }
    }
    mini_printf("\n");
    closedir(dh);
    return (0);
}
