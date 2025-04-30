/*
** EPITECH PROJECT, 2023
** convert_base8
** File description:
** convert_base8
*/

int convert_base8(unsigned int num)
{
    if (num == 0) {
        return 0;
    } else {
        return convert_base8(num / 8) * 10 + num % 8;
    }
}
