/*
** EPITECH PROJECT, 2023
** putg
** File description:
** putg
*/
#include "my.h"

void print_zeros_g(int a, long long i, int size, double f)
{
    while (i % a == 0 && a < size) {
        a = a * 10;
        i = f * a;
        my_putchar('0');
    }
}

int get_size_g(double f, int z)
{
    int i = 1;

    z = z - nb_len(f);
    for (z; z != 0; z = z - 1)
        i = i * 10;
    return i;
}

int put_g_float(double f, int size, long long temp, int a)
{
    int i = f;

    if (f < 0) {
        my_putchar('-');
        i = i * -1;
        temp = temp * -1;
    }
    if (temp > 5 && nb_len(f) > 5)
        i++;
    my_put_nbr(i);
    if (temp > 0 && nb_len(f) < 6) {
        my_putchar('.');
        i = f * 10;
        print_zeros_g(10, i, size, f);
        if (f * a * 10 - (i * a + temp) * 100 > 5)
            temp++;
        my_put_nbr(temp);
    }
}

int my_put_g(double f, int z)
{
    long long i = f;
    int a = 10;
    long e = i;
    long long temp = f * a - i * a;
    double d = f;
    int size = get_size_g(f, z);

    while (d * a - e * a - temp > 0 && a < size) {
        d = f * a;
        e = f * a;
        temp = d - i * a;
        a = a * 10;
        size++;
    }
    if (nb_len(i) + nb_len(temp) > 7)
        return my_put_e_g(f, z);
    else
        return put_g_float(f, size, temp, a);
}
