/*
** EPITECH PROJECT, 2023
** for .
** File description:
** for .
*/
#include <stdarg.h>
#include "my.h"

int for_dot_f(va_list list, int *i, const char *format, int *count)
{
    int a = format[*i] - 48;

        if (format[*i + 1] == 'f' || format[*i + 1] == 'F') {
            (*i)++;
            (*count)++;
            my_put_float(va_arg(list, double), a);
        }
        if (format[*i + 1] == 'e') {
            (*i)++;
            (*count)++;
            my_put_e(va_arg(list, double), a);
        }
}

int for_dot_e(va_list list, int *i, const char *format, int *count)
{
    int a = format[*i] - 48;

    my_put_e(va_arg(list, double), a);
}

int for_dot_g(va_list list, int *i, const char *format, int *count)
{
    int a = format[*i] - 48;

    if (format[*i + 1] == 'g')
        my_put_g(va_arg(list, double), a);
    else
        my_put_gmaj(va_arg(list, double), a);
}

int for_dot_under(va_list list, int *i, const char *format, int *count)
{
    int run = 0;

    if (format[*i + 1] == 'f' || format[*i + 1] == 'F') {
        run++;
        for_dot_f(list, *(&i), format, *(&count));
    }
    if (format[*i + 1] == 'e') {
        run++;
        for_dot_f(list, *(&i), format, *(&count));
    }
    if (format[*i + 1] == 'g' || format[*i + 1] == 'G') {
        run++;
        for_dot_g(list, *(&i), format, *(&count));
    }
    if (run == 0) {
        (*i)++;
        flags(list, *(&i), format);
    }
}

int for_dot(va_list list, int *i, const char *format, int *count)
{
    if (my_isnum(format[*i + 1]) == 1) {
        (*i)++;
        for_dot_under(list, *(&i), format, *(&count));
    } else
        my_putchar('0');
}
