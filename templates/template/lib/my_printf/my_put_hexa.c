/*
** EPITECH PROJECT, 2023
** hexa
** File description:
** hexa
*/
#include "my.h"

void hexbase(int nb)
{
    if (nb < 10)
        my_putchar(nb + '0');
    else
        my_putchar((nb) - 10 + 'a');
}

int my_put_hexa(long long nb)
{
    int a = nb;

    if (nb < 0)
        nb = 4294967296 + nb;
    if (nb > 9) {
        my_put_hexa(nb / 16);
        hexbase(nb % 16);
    } else if (nb != 0)
        hexbase(nb);
    if (a == 0 && nb > 0)
        my_putchar('0');
    return 1;
}
