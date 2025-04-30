/*
** EPITECH PROJECT, 2023
** my_put_adrr
** File description:
** my_put_adrr
*/

#include "my.h"
#include <stdarg.h>

int my_put_addr(va_list list)
{
    void *ptr = va_arg(list, void *);

    my_putstr("0x");
    my_put_hex_long((long)ptr);
    return 1;
}
