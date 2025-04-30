/*
** EPITECH PROJECT, 2023
** islower
** File description:
** islower
*/
#include "my.h"

int my_str_islower(char const *str)
{
    int i = 0;

    for (i; i < my_strlen(str); i++) {
        if (my_islower(str[i]) == 0)
            return 0;
    }
    return 1;
}
