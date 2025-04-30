/*
** EPITECH PROJECT, 2023
** putnbr
** File description:
** putnbr
*/
#include "my.h"

int retvalue(long long nb)
{
    int count = 0;

    for (nb; nb > 9; nb = nb / 10)
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
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
    return retvalue(nb);
}
