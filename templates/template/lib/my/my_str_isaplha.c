/*
** EPITECH PROJECT, 2023
** str_isaplha
** File description:
** str_isaplha
*/
#include "my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    for (i; i < my_strlen(str); i++) {
        if (my_isalpha(str[i]) == 0)
            return 0;
    }
    return 1;
}
