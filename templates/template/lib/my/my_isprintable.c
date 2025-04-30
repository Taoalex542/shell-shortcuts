/*
** EPITECH PROJECT, 2023
** isprintable
** File description:
** isprintable
*/

int my_isprintable(char a)
{
    if (a >= 32 && a <= 126)
        return 1;
    return 0;
}
