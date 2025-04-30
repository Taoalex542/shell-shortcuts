/*
** EPITECH PROJECT, 2023
** my_put_hexa_long
** File description:
** my_put_hexa_long
*/
#include "my.h"

int my_put_hex_long(long nb)
{
    int i = 0;
    int hex_values[20];
    char hex_digits[] = "0123456789abcdef";

    if (nb == 0) {
        my_putchar('0');
        return 1;
    }
    while (nb > 0) {
        i++;
        hex_values[i] = nb % 16;
        nb /= 16;
    }
    for (i--; i >= 0; i--) {
        my_putchar(hex_digits[hex_values[i]]);
    }
    return 1;
}
