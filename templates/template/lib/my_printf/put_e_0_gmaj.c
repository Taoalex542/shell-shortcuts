/*
** EPITECH PROJECT, 2023
** put e under 0
** File description:
** under 0
*/
#include "my.h"

double count_that_gmaj(long *i, double f, int *len)
{
    double count = 1;

    for ((*i); (*i) == 0; (*i) = f * (*len)) {
        (*len) = (*len) * 10;
        count++;
    }
    return count;
}

void if_neg_gmaj(double *f, long *i)
{
    if ((*f) < 0) {
        my_putchar('-');
        (*f) = (*f) * -1;
        (*i) = (*f);
    }
}

int get_size_e_0_gmaj(int z)
{
    int i = 1;

    for (z; z != 0; z = z - 1)
        i = i * 10;
    return i;
}

void put_zero_e_0_gmaj(int len, int temp, int size, double f)
{
    int test = 0;
    int hi = ((f * len * size) - temp);

    for (int g = 0; g != nb_len(temp); g++)
        hi = hi / 10;
    for (int a = 0; a != nb_len(hi) - 1; a++)
        my_putchar('0');
}

void my_put_e_0_gmaj(double f, int z)
{
    long i = f;
    int len = 1;
    double count = 0;
    int temp = 0;
    int after_temp = 0;
    int size = get_size_e_0_gmaj(z);

    if_neg_gmaj(&f, &i);
    count = count_that_gmaj(&i, f, &len);
    my_put_nbr(i);
    my_putchar('.');
    temp = ((f * len * size) - i * size);
    after_temp = ((f * len * (size * 10)) - ((temp * 10) + (i * (size * 10))));
    put_zero_e_0_gmaj(len, temp, size, f);
    if (after_temp > 5)
        temp++;
    my_put_nbr(temp);
    print_power_gmaj(z, count - 1, 2);
}
