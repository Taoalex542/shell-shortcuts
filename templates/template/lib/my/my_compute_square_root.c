/*
** EPITECH PROJECT, 2023
** rvejkfd
** File description:
** bvikjdns
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i * i < nb) {
        i++;
    }
    if (i * i > nb) {
        return 0;
    }
    return i;
}
