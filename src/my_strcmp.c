/*
** EPITECH PROJECT, 2023
** strcmp
** File description:
** task06
*/

#include "../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int len = my_strlen(s1);

    while (s1[i] == s2[i])
        i++;
    return (len - i);
}
