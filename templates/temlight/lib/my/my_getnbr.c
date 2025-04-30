/*
** EPITECH PROJECT, 2023
** getnbr
** File description:
** getnbr
*/
#include "my.h"

int my_getnbr(char const *str)
{
    int neg = 1;
    int count = 0;
    int temp = 0;

    for (int i = 0; i != my_strlen(str); i++) {
        if (str[i] == '-')
            neg = neg * -1;
    }
    for (int k = 0; my_isnum(str[k]) == 0; k++)
        count++;
    for (int j = count; my_isnum(str[j]) != 0 && str[j] != '\0'; j++) {
        temp = 10 * temp;
        temp = temp + str[j] - 48;
        if (temp < 0)
            return 0;
    }
    temp = temp * neg;
    return temp;
}

int nb_len(long long nb)
{
    int count = 0;

    if (nb < 0)
        nb = nb * -1;
    for ((void)nb; nb > 9; nb = nb / 10)
        count++;
    count++;
    return count;
}

int get_size(int z)
{
    int i = 1;

    for (; z != 0; z = z - 1)
        i = i * 10;
    return i;
}
