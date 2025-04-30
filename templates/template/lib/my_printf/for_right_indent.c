/*
** EPITECH PROJECT, 2023
** right identation handler
** File description:
** for_right_indent
*/

#include "my.h"
#include <stdarg.h>
#include <stdio.h>

int cont(int arg, int *i, const char *format, int *count)
{
    if (format[*i] == 'i' || format[*i] == 'd')
        (*count) = (*count) + my_put_nbr(arg);
    if (format[*i] == 'x')
        (*count) = (*count) + my_put_hexa(arg);
    if (format[*i] == 'X')
        (*count) = (*count) + my_put_hexa_upper(arg);
    if (format[*i] == 'o')
        (*count) = (*count) + my_put_nbr(convert_base8(arg));
    if (format[*i] == 'u')
        (*count) = (*count) + my_put_nbr_unsigned(arg);
}

int for_right_indent(va_list list, int *i, const char *format, int *count)
{
    int arg = va_arg(list, int);
    int len_arg = nb_len(arg);
    int space_num = format[*i] - 48;
    int space_needed = 0;

    for ((*i); my_isnum(format[*i + 1]) == 1; (*i)++) {
        (*i)++;
        space_num = space_num * 10;
        space_num = space_num + (format[*i] - 48);
    }
    space_needed = space_num - len_arg;
    for (int i = 0; i < space_needed; i++) {
        my_putchar(' ');
    }
    (*i)++;
    (*count)++;
    cont(arg, &(*i), format, &(*count));
    return 1;
}
