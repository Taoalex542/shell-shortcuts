/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf
*/
#include "my.h"

static void my_print_that(va_list list, int i, const char *format, int count)
{
    if (format[i] == 's') {
        count++;
        my_putstr(va_arg(list, char *));
    }
    if (format[i] == 'i' || format[i] == 'd')
        count = my_put_nbr(va_arg(list, int));
    if (format[i] == 'c') {
        count++;
        my_putchar(va_arg(list, int));
    }
    if (format[i] == 'u')
        count = my_put_nbr_unsigned(va_arg(list, int));
    if (format[i] == 'f' || format[i] == 'F')
        count = my_put_float(va_arg(list, double), 6);
    if (count == 0)
        my_putchar('%');
}

void flags(va_list list, int *i, const char *format)
{
    int count = 0;

    if (format[*i] == '.') {
        count++;
        for_dot(list, *(&i), format, &count);
    }
    if (count == 0)
        my_print_that(list, *i, format, count);
}

int mini_pf(const char *format, ...)
{
    va_list list;
    int i = 0;
    int len_format = my_strlen(format);

    va_start(list, format);
    while (i < len_format) {
        if (format[i] == '%') {
            i++;
            flags(list, &i, format);
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(list);
    return i;
}
