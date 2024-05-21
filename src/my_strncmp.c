/*
** EPITECH PROJECT, 2023
** strncmp
** File description:
** task07
*/

#include "../include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && i < n && s1[i] && s2[i])
        i++;
    return (n - i);
}
