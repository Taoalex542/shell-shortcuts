/*
** EPITECH PROJECT, 2023
** dfsjenzkc
** File description:
** hjbcdsxn
*/

int my_find_prime_sup(int nb)
{
    int i = 2;

    if (nb == 0 || nb == 1) {
        return 2;
    }
    for (i; i < nb; i++) {
        if (nb % i == 0) {
            nb++;
        }
    }
    return nb;
}
