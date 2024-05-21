/*
** EPITECH PROJECT, 2024
** B-PSU-100-NCY-1-1-navy-antoine.schoeser
** File description:
** my
*/

#pragma once

#include <stdarg.h>
#include "list.h"

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
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
int condition(int i, const char *format, va_list list);
int my_printf(const char *format, ...);
unsigned int my_put_nbr_binary(unsigned int nb);
unsigned int my_put_nbr_deci(unsigned int nb);
unsigned int my_put_nbr_hexa(unsigned int nb);
unsigned int my_put_nbr_octal(unsigned int nb);
unsigned int my_put_nbr_hexa2(unsigned int nb);
void *my_put_nbr_pointeur(void *nb);
int my_put_nbr_float(double nb);
void my_print_prc(va_list list);
void my_print_i(va_list list);
void my_print_d(va_list list);
void my_print_c(va_list list);
void my_print_s(va_list list);
void my_print_o(va_list list);
void my_print_u(va_list list);
void my_print_x(va_list list);
void my_print_large_x(va_list list);
void my_print_binary(va_list list);
void my_print_f(va_list list);
void my_print_p(va_list list);
void print_arg(int argc, char **argv, char **env);
int repeat(char **argv, int i);
env_t *list(char *path, char *cont);
int cast(env_t *list);
char **str_word_array(char *str, char sep);
int printable(char **str, char sep);
char *all_for_fork(general_t *mp, char **env);
int born(general_t *mp, char **env);
void print_env(char **env);
char *view_access(general_t *mp, char **env);
void *my_memset(void *value, int c, size_t size);
int exec(general_t *mp, char **env);
