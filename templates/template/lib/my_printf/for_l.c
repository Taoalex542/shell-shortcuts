/*
** EPITECH PROJECT, 2023
** for_l
** File description:
** for_l
*/

#include "my.h"
#include <stdarg.h>

int for_l(va_list list, int *i, const char *format, int *count)
{
    long a = va_arg(list, long);
    int check = 0;

    if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
        check = check + my_put_nbr(a);
    if (format[*i + 1] == 'x')
        check = check + my_put_hexa(a);
    if (format[*i + 1] == 'X')
        check = check + my_put_hexa_upper(a);
    if (format[*i + 1] == 'o')
        check = check + my_put_nbr(convert_base8(a));
    (*i)++;
    (*count)++;
    if (check == 0)
        flags(list, *(&i), format);
    return 1;
}
