/*
** EPITECH PROJECT, 2023
** for_hh
** File description:
** for_hh.c
*/

#include "my.h"
#include <stdarg.h>

int for_hh(va_list list, int *i, const char *format, int *count)
{
    int a = va_arg(list, int);
    char s_a = (char)a;
    unsigned char s_u = (unsigned char)a;
    int check = 0;

    if (format[*i + 2] == 'd' || format[*i + 2] == 'i')
        check = check + my_put_nbr(s_u);
    if (format[*i + 2] == 'x')
        check = check + my_put_hexa(s_u);
    if (format[*i + 2] == 'X')
        check = check + my_put_hexa_upper(s_u);
    if (format[*i + 2] == 'o')
        check = check + my_put_nbr(convert_base8(s_u));
    if (format[*i + 2] == 'u')
        check = check + my_put_nbr(s_u);
    (*i) = (*i) + 2;
    (*count)++;
    if (check == 0)
        flags(list, *(&i), format);
    return 1;
}
