/*
** EPITECH PROJECT, 2023
** hoveril
** File description:
** ghrioelfdjne
*/

int my_is_prime(int nb)
{
    int i = 1;
    int temp = 0;

    if (nb == 0 || nb == 1) {
        return 0;
    }
    for (i; i <= nb; i++) {
        if (nb % i == 0) {
            temp++;
        }
    }
    if (temp == 2) {
        return 1;
    } else {
        return 0;
    }
}
