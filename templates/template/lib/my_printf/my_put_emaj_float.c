/*
** EPITECH PROJECT, 2023
** put e float
** File description:
** put e float
*/
#include "my.h"

void is_neg_float_emaj(long long *i, double *f)
{
    if ((*i) < 0) {
        (*i) = (*i) * -1;
        (*f) = (*f) * -1;
    }
}

int get_size_emaj_f(int z)
{
    int i = 1;

    for (z; z != 0; z = z - 1)
        i = i * 10;
    return i;
}

void put_zero_emaj_f(int len, int temp, int size, double f)
{
    int test = 0;
    int hi = ((f * len * size) - temp * len * 10);

    for (int g = 0; g != nb_len(temp) + nb_len(f); g++)
        hi = hi / 10;
    for (int a = 0; a != nb_len(hi) - 1; a++)
        my_putchar('0');
}

void my_put_emaj_float(double f, int z)
{
    long long i = f;
    long long d = 0;
    int l = 1;
    int a = 0;
    int point = get_size_emaj_f(z);

    for (int j = 0; j != nb_len(i) - 1; j++)
        l = l * 10;
    my_put_nbr(((i % (l * 10)) - (i % l)) / l);
    my_putchar('.');
    is_neg_float_emaj(&i, &f);
    d = (f - (((i % (l * 10)) - (i % l)) / l) * l) * (point / l);
    a = ((f - (((i % (l * 10)) - (i % l)) / l) * l) * (point * 10 / l) + 1);
    put_zero_emaj_f(l, d, point, f);
    if (a - (d * 10) > 5)
        d = d + 1;
    my_put_nbr(d);
    for (int k = z; f == 0 && k - 1 > 0; k = k - 1)
        my_putchar('0');
    print_power_emaj(z, f, 1);
}
