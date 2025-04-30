/*
** EPITECH PROJECT, 2023
** ncat
** File description:
** ncat
*/
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    int maxsize = len_dest + nb;
    int j = 0;

    if (nb < len_src) {
        for (nb; nb != 0; nb--) {
            dest[len_dest + j] = src[j];
            j++;
        }
    }
    dest[maxsize] = '\0';
    return dest;
}
