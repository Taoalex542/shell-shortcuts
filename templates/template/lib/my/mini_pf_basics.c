/*
** EPITECH PROJECT, 2023
** my_put_float
** File description:
** my_put_float.c
*/
#include "my.h"

static void print_zeros(int a, long long i, int size, double f)
{
    while (i % a == 0 && a < size) {
        a = a * 10;
        i = f * a;
        my_putchar('0');
    }
}

static void for_dot_f(va_list list, int *i, const char *format, int *count)
{
    int a = format[*i] - 48;

        if (format[*i + 1] == 'f' || format[*i + 1] == 'F') {
            (*i)++;
            (*count)++;
            my_put_float(va_arg(list, double), a);
        }
}

void for_dot(va_list list, int *i, const char *format, int *count)
{
    int run = 0;

    if (my_isnum(format[*i + 1]) == 1) {
        (*i)++;
        if (format[*i + 1] == 'f' || format[*i + 1] == 'F') {
        run++;
        for_dot_f(list, *(&i), format, *(&count));
        }
        if (run == 0) {
        (*i)++;
        flags(list, *(&i), format);
        }
    } else
        my_putchar('0');
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

int my_put_nbr_unsigned(unsigned int nb)
{
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
    return 1;
}
