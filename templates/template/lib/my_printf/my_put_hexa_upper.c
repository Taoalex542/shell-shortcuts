/*
** EPITECH PROJECT, 2023
** hexa
** File description:
** hexa Upper
*/
#include "my.h"

void hexbase_upper(int nb)
{
    if (nb < 10)
        my_putchar(nb + '0');
    else
        my_putchar((nb) - 10 + 'A');
}

int my_put_hexa_upper(long long nb)
{
    int a = nb;

    if (nb < 0)
        nb = 4294967296 + nb;
    if (nb > 9) {
        my_put_hexa_upper(nb / 16);
        hexbase_upper(nb % 16);
    } else if (nb != 0)
        hexbase_upper(nb);
    if (a == 0 && nb > 0)
        my_putchar('0');
    return 1;
}
