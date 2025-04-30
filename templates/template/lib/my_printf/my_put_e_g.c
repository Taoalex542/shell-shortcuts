/*
** EPITECH PROJECT, 2023
** put e float
** File description:
** put e float
*/
#include "my.h"

int print_power_g(int i, double f, int r)
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

void is_neg_float_e_g(long long *i, double *f)
{
    if ((*i) < 0) {
        (*i) = (*i) * -1;
        (*f) = (*f) * -1;
    }
}

int get_size_e_f_g(int z)
{
    int i = 1;

    for (z; z != 0; z = z - 1)
        i = i * 10;
    return i;
}

void put_zero_e_f_g(int len, int temp, int size, double f)
{
    int test = 0;
    int hi = ((f * len * size) - temp * len * 10);

    for (int g = 0; g != nb_len(temp) + nb_len(f); g++)
        hi = hi / 10;
    for (int a = 0; a != nb_len(hi) - 1; a++)
        my_putchar('0');
}

int my_put_e_g(double f, int z)
{
    long long i = f;
    long long d = 0;
    long long a = 0;
    int l = get_size_e_f_g(z);

    my_put_nbr(((i % (l * 10)) - (i % l)) / l);
    my_putchar('.');
    is_neg_float_e_g(&i, &f);
    d = ((i / 10 % l) - i / l * l / 10);
    a = ((i % l) - d * 10);
    put_zero_e_f_g(l, d, l, f);
    if (a > 5)
        d = d + 1;
    my_put_nbr(d);
    for (int k = z; f == 0 && k - 1 > 0; k = k - 1)
        my_putchar('0');
    return print_power_g(z, f, 1);
}
