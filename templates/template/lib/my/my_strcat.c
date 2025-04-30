/*
** EPITECH PROJECT, 2023
** strcat
** File description:
** strcat
*/
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int j = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i + j] = src[i];
    dest[i + j] = '\0';
}
