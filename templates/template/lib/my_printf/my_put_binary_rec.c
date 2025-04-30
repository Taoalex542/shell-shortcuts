/*
** EPITECH PROJECT, 2023
** gggggggg
** File description:
** put binary rec
*/

#include "my.h"

int my_put_binary_rec(int num)
{
    if (num < 0) {
        my_putchar('-');
        num = -num;
    }
    if (num > 1) {
        my_put_binary_rec(num / 2);
    }
    my_putchar('0' + (num % 2));
    return 1;
}
