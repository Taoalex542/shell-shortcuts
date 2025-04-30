/*
** EPITECH PROJECT, 2023
** exponantial printf
** File description:
** e.c
*/
#include "my.h"

int print_power(int i, double f, int r)
{
    int power = i;

    for (power; power < 6; power++)
        my_putchar('0');
    my_putchar('e');
    if (r % 2 == 0)
        my_putchar('-');
    else
        my_putchar('+');
    if ((i) < 10)
        my_putchar('0');
    if (r % 2 == 0)
        my_put_nbr(f);
    else
        my_put_nbr(nb_len(f) - 1);
        return 1;
}

int my_put_e(double f, int z)
{
    if (f < 1 && f > 0)
        my_put_e_0(f, z);
    else
        my_put_e_float(f, z);
}
