/*
** EPITECH PROJECT, 2023
** task02
** File description:
** task02
*/
char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (j != n) {
        dest[j] = src[j];
        j++;
    }
    if (n > i) {
        dest[n] = '\0';
    }
    return dest;
}
