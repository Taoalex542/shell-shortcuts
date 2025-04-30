/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** task03
*/
#include <stdlib.h>
#include "my.h"

int my_show_word_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
