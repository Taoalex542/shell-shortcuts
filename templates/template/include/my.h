/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** task02
*/
#include <stdarg.h>
#include <stdlib.h>

#pragma once

int my_islower(char letter);
int my_isupper(char letter);
int my_isalpha(char letter);
int my_isnum(char nb);
int my_isalnum(char a);
int my_isprintable(char a);
int maxsize(int argc, char **argv);
int my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(long long nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
char *concat_params(int argc, char **argv);
int my_show_word_array(char **tab);
char **my_str_to_word_array(char const *str);
int convert_base8(unsigned int num);
int my_put_hexa(long long nb);
int my_put_hexa_upper(long long nb);
int my_printf(const char *format, ...);
int my_put_nbr_unsigned(int unsigned nb);
int my_put_float(double f, int z);
int my_put_binary_rec(int num);
int my_put_addr(va_list list);
int my_put_hex_long(long nb);
int nb_len(long long nb);
int my_put_e(double f, int z);
int my_put_emaj(double f, int z);
int for_sharp(va_list list, int *i, const char *format, int *count);
void my_print_that(va_list list, int i, const char *format, int count);
int for_plus(va_list list, int *i, const char *format, int *count);
int for_dot(va_list list, int *i, const char *format, int *count);
void flags(va_list list, int *i, const char *format);
int for_space(va_list list, int *i, const char *format, int *count);
int print_power(int i, double f, int r);
void my_put_e_float(double f, int z);
void my_put_e_0(double f, int z);
int for_right_indent(va_list list, int *i, const char *format, int *count);
void my_put_emaj_float(double f, int z);
void my_put_emaj_0(double f, int z);
int print_power_emaj(int i, double f, int r);
int for_l(va_list list, int *i, const char *format, int *count);
int for_h(va_list list, int *i, const char *format, int *count);
int for_ll(va_list list, int *i, const char *format, int *count);
int my_put_e_g(double f, int z);
void my_put_e_0_g(double f, int z);
int my_put_g(double f, int z);
int print_power_g(int i, double f, int r);
int my_put_e_gmaj(double f, int z);
void my_put_e_0_gmaj(double f, int z);
int my_put_gmaj(double f, int z);
int print_power_gmaj(int i, double f, int r);
int for_hh(va_list list, int *i, const char *format, int *count);
void free_word_array(char **ans);
