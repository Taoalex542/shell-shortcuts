/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** task04
*/
#include "my.h"
#include <stdio.h>

int nbword(char const *str)
{
    int nbword = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_isalnum(str[i]) == 0 && my_isalnum(str[i - 1]) == 1)
            nbword++;
        if (str[i + 1] == '\0' && my_isalnum(str[i]) == 1)
            nbword++;
    }
    return nbword;
}

int wordlen(char const *str, int i)
{
    int retvalue = 0;

    for (; my_isalnum(str[i]) != 0; i++)
        retvalue++;
    return retvalue;
}

int start_here(char **ans, char const *str)
{
    int i = 0;

    for (; my_isalnum(str[i]) == 0; i++);
    ans[0] = malloc(sizeof(char) * (wordlen(str, i) + 1));
    return i;
}

char **my_str_to_word_array(char const *str)
{
    char **ans = malloc(sizeof(char *) * (nbword(str) + 1));
    int word = 0;
    int letter = 0;
    int i = start_here(ans, str);

    for (; str[i] != '\0'; i++) {
        if (my_isalnum(str[i]) == 1) {
            ans[word][letter] = str[i];
            letter++;
        }
        if (my_isalnum(str[i]) == 0 && my_isalnum(str[i + 1]) == 1 &&
        letter > 0) {
            letter = 0;
            word++;
            ans[word] = malloc(sizeof(char) * (wordlen(str, i + 1) + 1));
        }
        ans[word][letter] = '\0';
    }
    ans[word + 1] = NULL;
    return ans;
}

void free_word_array(char **ans)
{
    for (int i = 0; ans[i] != NULL; i++) {
        free(ans[i]);
    }
    free(ans);
}
