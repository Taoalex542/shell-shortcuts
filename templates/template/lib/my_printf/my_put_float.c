/*
** EPITECH PROJECT, 2023
** my_put_float
** File description:
** my_put_float.c
*/
#include <stdio.h>
#include "my.h"

void print_zeros(int a, long long i, int size, double f)
{
    while (i % a == 0 && a < size) {
        a = a * 10;
        i = f * a;
        my_putchar('0');
    }
}

int get_size(int z)
{
    int i = 1;

    for (z; z != 0; z = z - 1)
        i = i * 10;
    return i;
}

int my_put_float(double f, int z)
{
    long long i = f;
    int size = get_size(z);
    long long temp = ((f * size) - (i * size));
    long long after_temp = ((f * (size * 10)) - (i * (size * 10))) - temp * 10;

    if (f < 0) {
        my_putchar('-');
        i = i * -1;
        temp = temp * -1;
    }
    my_put_nbr(i);
    my_putchar('.');
    i = f * 10;
    print_zeros(10, i, size, f);
    if (after_temp > 5)
        temp++;
    my_put_nbr(temp);
    return 1;
}
