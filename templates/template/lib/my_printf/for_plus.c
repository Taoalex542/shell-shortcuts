/*
** EPITECH PROJECT, 2023
** forplus
** File description:
** forplus
*/

#include "my.h"
#include <stdio.h>

int for_plus_d_i(va_list list, int *i, const char *format, int *count)
{
    int a = va_arg(list, int);

    if (a >= 0)
        my_putchar('+');
    (*i)++;
    (*count)++;
    my_put_nbr(a);
    return 1;
}

int for_plus_f(va_list list, int *i, const char *format, int *count)
{
    double a = va_arg(list, double);

    if (format[*i + 1] == 'f') {
        (*count)++;
        (*i)++;
        if (a >= 0)
            my_putchar('+');
        my_put_float(a, 6);
    }
    if (format[*i + 1] == 'F') {
        (*count)++;
        (*i)++;
        if (a >= 0)
            my_putchar('+');
        my_put_float(a, 6);
    }
    return 1;
}

int for_plus_o(va_list list, int *i, const char *format, int *count)
{
    int a = va_arg(list, int);

    if (a >= 0) {
        (*count)++;
        (*i)++;
        my_put_nbr(convert_base8(a));
    }
    return 1;
}

int for_plus_x(va_list list, int *i, const char *format, int *count)
{
    int a = va_arg(list, int);

    if (a >= 0) {
        (*count)++;
        (*i)++;
        my_put_nbr(convert_base8(a));
    }
    return 1;
}

int for_plus(va_list list, int *i, const char *format, int *count)
{
    int test = 0;

    if (format[*i + 1] == 'f' || format[*i + 1] == 'F')
        test = test + for_plus_f(list, *(&i), format, *(&count));
    if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
        test = test + for_plus_d_i(list, *(&i), format, *(&count));
    if (format[*i + 1] == 'o')
        test = test + for_plus_o(list, *(&i), format, *(&count));
    if (test == 0) {
        (*i)++;
        flags(list, *(&i), format);
    }
    return 1;
}
