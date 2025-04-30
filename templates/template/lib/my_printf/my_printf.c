/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void my_print_that2(va_list list, int i, const char *format, int count)
{
    if (format[i] == 'f' || format[i] == 'F')
        count = my_put_float(va_arg(list, double), 6);
    if (format[i] == 'b')
        count = my_put_binary_rec(va_arg(list, int));
    if (format[i] == 'p')
        count = my_put_addr(list);
    if (format[i] == 'E')
        count = my_put_emaj(va_arg(list, double), 6);
    if (format[i] == 'g')
        count = my_put_g(va_arg(list, double), 6);
    if (format[i] == 'G')
        count = my_put_gmaj(va_arg(list, double), 6);
    if (count == 0)
        my_putchar('%');
}

void my_print_that(va_list list, int i, const char *format, int count)
{
    if (format[i] == 's')
        count = my_putstr(va_arg(list, char *));
    if (format[i] == 'i' || format[i] == 'd')
        count = my_put_nbr(va_arg(list, int));
    if (format[i] == 'c')
        count = my_putchar(va_arg(list, int));
    if (format[i] == 'o')
        count = my_put_nbr(convert_base8(va_arg(list, int)));
    if (format[i] == '%')
        count = my_putchar('%');
    if (format[i] == 'e')
        count = my_put_e(va_arg(list, double), 6);
    if (format[i] == 'x')
        count = my_put_hexa(va_arg(list, int));
    if (format[i] == 'X')
        count = my_put_hexa_upper(va_arg(list, int));
    if (format[i] == 'u')
        count = my_put_nbr_unsigned(va_arg(list, int));
    my_print_that2(list, i, format, count);
}

void other_flags(va_list list, int *i, const char *format, int count)
{
    int k = *i;
    char z = 0;

    if (format[*i] == 'l' && format[*i + 1] == 'l')
        count = count + for_ll(list, *(&i), format, &count);
    if (format[*i] == 'h' && format[*i + 1] == 'h')
        count = count + for_hh(list, *(&i), format, &count);
    if (my_isnum(format[*i]) == 1)
        while (my_isnum(format[k]) == 1)
            k++;
    z = format[k];
    if (z == 'x' || z == 'X' || z == 'o' || z == 'u' || z == 'd' || z == 'i')
        if (k != (*i))
            count = count + for_right_indent(list, *(&i), format, &count);
    if (count == 0)
        my_print_that(list, *i, format, count);
}

void flags(va_list list, int *i, const char *format)
{
    int count = 0;

    if (format[*i] == '#')
        count = count + for_sharp(list, *(&i), format, &count);
    if (format[*i] == '.')
        count = count + for_dot(list, *(&i), format, &count);
    if (format[*i] == '+')
        count = count + for_plus(list, *(&i), format, &count);
    if (format[*i] == ' ')
        count = count + for_space(list, *(&i), format, &count);
    if ((format[*i] == 'l' || format[*i] == 'L') && format[*i + 1] != 'l')
        count = count + for_l(list, *(&i), format, &count);
    if (format[*i] == 'h' && format[*i + 1] != 'h')
        count = count + for_h(list, *(&i), format, &count);
    other_flags(list, *(&i), format, count);
}

int my_printf(const char *format, ...)
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
