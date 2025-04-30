/*
** EPITECH PROJECT, 2023
** task01
** File description:
** task01
*/

char *my_strcpy(char *dest, char const *src)
{
    int j = 0;

    while (src[j] != '\0') {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return dest;
}
