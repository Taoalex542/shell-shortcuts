/*
** EPITECH PROJECT, 2023
** nblrn
** File description:
** nblen
*/

int nb_len(long long nb)
{
    int count = 0;

    if (nb < 0)
        nb = nb * -1;
    for ((void)nb; nb > 9; nb = nb / 10)
        count++;
    count++;
    return count;
}
