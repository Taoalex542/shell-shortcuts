/*
** EPITECH PROJECT, 2023
** task02
** File description:
** concat_params
*/
#include <stdlib.h>
#include "my.h"

int maxsize(int argc, char **argv)
{
    int a = 0;
    int max = 0;

    while (a < argc) {
        max += my_strlen(argv[a]);
        a++;
    }
}

char *concat_params(int argc, char **argv)
{
    char *dest;
    int i = 0;
    int j = 0;
    int b = 0;

    dest = malloc(sizeof(char) * (maxsize(argc, argv) + 1));
    for (i; i < argc; i++) {
        while (argv[i][j] != '\0') {
            dest[b] = argv[i][j];
            j++;
            b++;
        }
        j = 0;
        dest[b] = '\n';
        b++;
    }
    dest[b + 1] = '\0';
    return dest;
}

int main(int ac, char **av)
{
    my_putstr(concat_params(ac, av));
    return (EXIT_SUCCESS);
}
