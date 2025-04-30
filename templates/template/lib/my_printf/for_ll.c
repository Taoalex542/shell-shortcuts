/*
** EPITECH PROJECT, 2023
** for_ll
** File description:
** for_ll
*/
#include "my.h"
#include <stdarg.h>

int for_ll(va_list list, int *i, const char *format, int *count)
{
    unsigned long long a = va_arg(list, long long int);
    int check = 0;

    if (format[*i + 2] == 'd' || format[*i + 2] == 'i')
        my_put_nbr(a);
    if (format[*i + 2] == 'x')
        my_put_hexa(a);
    if (format[*i + 2] == 'X')
        my_put_hexa_upper(a);
    if (format[*i + 2] == 'o')
        my_put_nbr(convert_base8(a));
    (*i)++;
    (*count)++;
    if (check == 0)
        flags(list, *(&i), format);
    return 1;
}
