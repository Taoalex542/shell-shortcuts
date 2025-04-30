/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** task02
*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#pragma once

int my_islower(char letter);
int my_isupper(char letter);
int my_isalpha(char letter);
int my_isnum(char nb);
int my_isalnum(char a);
void my_putchar(char c);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(long long nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
void my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char *const *tab);
char **my_str_to_word_array(char const *str);
void free_word_array(char **ans);
int mini_pf(const char *format, ...);
int my_put_float(double f, int z);
int my_put_nbr_unsigned(unsigned int nb);
void flags(va_list list, int *i, const char *format);
void for_dot(va_list list, int *i, const char *format, int *count);
int get_size(int z);
