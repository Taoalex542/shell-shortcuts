/*
** EPITECH PROJECT, 2023
** isaplha
** File description:
** isalpha
*/

int my_isalpha(char letter)
{
    if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
        return 1;
    return 0;
}
