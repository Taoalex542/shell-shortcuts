/*
** EPITECH PROJECT, 2023
** forspace
** File description:
** forspace
*/

#include "my.h"
#include <stdio.h>

int for_space_d_i(va_list list, int *i, const char *format, int *count)
{
    int a = va_arg(list, int);

    if (a >= 0) {
        my_putchar(' ');
        (*i)++;
        (*count)++;
        my_put_nbr(a);
    } else {
        (*i)++;
        (*count)++;
        my_put_nbr(a);
    }
}

int for_space_f(va_list list, int *i, const char *format, int *count)
{
    float a = va_arg(list, double);

    if (format[*i + 1] == 'f') {
        (*count)++;
        (*i)++;
        if (a >= 0) {
            my_putchar(' ');
            my_put_float(a, 6);
        } else
            my_put_float(a, 6);
    }
    if (format[*i + 1] == 'F') {
        (*count)++;
        (*i)++;
        if (a >= 0) {
            my_putchar(' ');
            my_put_float(a, 6);
        } else
            my_put_float(a, 6);
    }
}

int for_space(va_list list, int *i, const char *format, int *count)
{
    int test = 0;
    int check = 0;

    if (format[*i + 1] == 'f') {
        check = check + for_space_f(list, *(&i), format, *(&count));
    }
    if (format[*i + 1] == 'd' || format[*i + 1] == 'i') {
        check = check + for_space_d_i(list, *(&i), format, *(&count));
    }
}
