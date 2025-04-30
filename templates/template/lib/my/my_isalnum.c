/*
** EPITECH PROJECT, 2023
** alnum
** File description:
** alnum
*/

int my_isalnum(char a)
{
    if (a >= 'A' && a <= 'Z')
        return 1;
    if (a >= 'a' && a <= 'z')
        return 1;
    if (a >= '0' && a <= '9')
        return 1;
    return 0;
}
