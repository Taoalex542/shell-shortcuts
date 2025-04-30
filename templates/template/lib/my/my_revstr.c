/*
** EPITECH PROJECT, 2023
** task03
** File description:
** task03
*/

char *my_revstr(char *str)
{
    int len = 0;
    int i = 0;
    char temp1;

    while (str[len] != '\0') {
        len++;
    }
    len--;
    for (i; i < len; len--) {
        temp1 = str[len];
        str[len] = str[i];
        str[i] = temp1;
        i++;
    }
    return str;
}
