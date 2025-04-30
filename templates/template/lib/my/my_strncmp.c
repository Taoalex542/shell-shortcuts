/*
** EPITECH PROJECT, 2023
** strncmp
** File description:
** strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (n; n != 1; n--) {
        if ((*s1 == *s2) && (*s1 != '\0')) {
            s1++;
            s2++;
        }
    }
    return (*s1 - *s2);
}
