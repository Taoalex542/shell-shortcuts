/*
** EPITECH PROJECT, 2023
** nlkcdc
** File description:
** fouijkcdl
*/
#include "my.h"

int print_power_emaj(int i, double f, int r)
{
    int power = i;

    for (power; power < 6; power++)
        my_putchar('0');
    my_putchar('E');
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

int my_put_emaj(double f, int z)
{
    if (f < 1 && f > 0)
        my_put_emaj_0(f, z);
    else
        my_put_emaj_float(f, z);
}
