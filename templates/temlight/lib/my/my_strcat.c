/*
** EPITECH PROJECT, 2023
** strcat
** File description:
** strcat
*/
#include "my.h"

void my_strcat(char *dest, char const *src)
{
    int j = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i + j] = src[i];
    dest[i + j] = '\0';
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    int maxsize = len_dest + nb;
    int j = 0;

    if (nb < len_src) {
        for (; nb != 0; nb--) {
            dest[len_dest + j] = src[j];
            j++;
        }
    }
    dest[maxsize] = '\0';
    return dest;
}
