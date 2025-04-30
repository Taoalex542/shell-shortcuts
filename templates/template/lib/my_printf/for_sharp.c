/*
** EPITECH PROJECT, 2023
** for #
** File description:
** for #
*/
#include <stdarg.h>
#include "my.h"

int for_sharp_x(va_list list, int *i, const char *format, int *count)
{
    int a = va_arg(list, int);

    if (format[*i + 1] == 'x') {
        (*count)++;
        (*i)++;
        if (a != 0) {
            my_putstr("0x");
            my_put_hexa(a);
        } else
            my_putchar('0');
    }
    if (format[*i + 1] == 'X') {
        (*count)++;
        (*i)++;
        if (a != 0) {
            my_putstr("0X");
            my_put_hexa_upper(a);
        } else
            my_putchar('0');
    }
}

int for_sharp_o(va_list list, int *i, const char *format, int *count)
{
    int a = va_arg(list, int);

    if (a != 0) {
        my_put_nbr(0);
        (*i)++;
        (*count)++;
        my_put_nbr(convert_base8(a));
    } else {
        (*i)++;
        (*count)++;
        my_put_nbr(convert_base8(a));
    }
}

int for_sharp(va_list list, int *i, const char *format, int *count)
{
    int test = 0;

    if (format[*i + 1] == '#') {
        (*i)++;
        for_sharp(list, *(&i), format, *(&count));
    } else
        test = test + 1;
    if (format[*i + 1] == 'X' || format[*i + 1] == 'x') {
        test++;
        for_sharp_x(list, *(&i), format, *(&count));
    }
    if (format[*i + 1] == 'o') {
        test++;
        for_sharp_o(list, *(&i), format, *(&count));
    }
    if (test == 1) {
        (*i)++;
        flags(list, *(&i), format);
    }
}
