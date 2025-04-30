/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int main(void)
{
    char *str = "A 815 321  1484 166  5  0\n         ";
    char **arr;

    arr = my_str_to_word_array(str);
    my_show_word_array(arr);
    free_word_array(arr);
}
