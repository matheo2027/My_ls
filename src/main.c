/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int execute_ls(const char *dir);
int mini_printf(const char *format, ...);

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 1) {
        execute_ls("./");
    }
    if (argc == 2) {
        execute_ls(argv[1]);
    } else {
        while (argv[i + 1] != NULL && argv[i + 1] >= 3) {
            mini_printf("%s", argv[i + 1]);
            mini_printf("%s", ":");
            mini_printf("\n");
            execute_ls(argv[i + 1]);
            i++;
        }
    }
    return (0);
}
