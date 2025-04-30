/*
** EPITECH PROJECT, 2023
** strstr
** File description:
** strstr
*/
#include "my.h"

int checker(char *str, char const *to_find, int a)
{
    int b = a;
    int c = 0;

    while (str[b] == to_find[c]) {
        c++;
        b++;
        if (to_find[c] == '\0')
            return 1;
        if (str[b] == '\0')
            return 2;
    }
}

char *my_strstr(char *str, char const *to_find)
{
    int len1 = my_strlen(str);
    int len2 = my_strlen(to_find);
    int b = 0;
    int c = 0;

    for (int a = 0; a < len1; a++) {
        if (checker(str, to_find, a) == 1)
            return &str[a];
        if (checker(str, to_find, a) == 2)
            return 0;
    }
    if (len2 == 0)
        return str;
    return 0;
}
