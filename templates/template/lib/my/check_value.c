/*
** EPITECH PROJECT, 2023
** isaplha
** File description:
** isalpha
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

int my_isalpha(char letter)
{
    if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
        return 1;
    return 0;
}

int my_islower(char letter)
{
    if (letter >= 'a' && letter <= 'z')
        return 1;
    return 0;
}

int my_isnum(char nb)
{
    if (nb >= '0' && nb <= '9')
        return 1;
    return 0;
}

int my_isupper(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
        return 1;
    return 0;
}
