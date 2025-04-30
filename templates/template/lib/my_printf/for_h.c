/*
** EPITECH PROJECT, 2023
** for_h
** File description:
** for_h
*/

#include "my.h"
#include <stdarg.h>

int for_h(va_list list, int *i, const char *format, int *count)
{
    int a = va_arg(list, int);
    short s_a = (short)a;
    unsigned short s_u = (unsigned short)a;
    int check = 0;

    if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
        check = check + my_put_nbr(s_a);
    if (format[*i + 1] == 'x')
        check = check + my_put_hexa(s_a);
    if (format[*i + 1] == 'X')
        check = check + my_put_hexa_upper(s_a);
    if (format[*i + 1] == 'o')
        check = check + my_put_nbr(convert_base8(s_a));
    if (format[*i + 1] == 'u')
        check = check + my_put_nbr(s_u);
    (*i)++;
    (*count)++;
    if (check == 0)
        flags(list, *(&i), format);
    return 1;
}
