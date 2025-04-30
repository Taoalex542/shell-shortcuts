/*
** EPITECH PROJECT, 2023
** no
** File description:
** no
*/
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str) + 1);
}

int retvalue(int nb)
{
    int count = 0;

    for (; nb > 9; nb = nb / 10)
        count++;
    count++;
    return count;
}

int my_put_nbr(long long nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    my_putchar((nb % 10) + '0');
    return retvalue(nb);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
