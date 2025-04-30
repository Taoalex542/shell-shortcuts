/*
** EPITECH PROJECT, 2023
** isnum
** File description:
** isnum
*/

int my_isnum(char nb)
{
    if (nb >= '0' && nb <= '9')
        return 1;
    return 0;
}
