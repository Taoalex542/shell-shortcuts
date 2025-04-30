/*
** EPITECH PROJECT, 2023
** unassigned put nb
** File description:
** look up
*/
#include "my.h"

int my_put_nbr_unsigned(unsigned int nb)
{
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
    return 1;
}
