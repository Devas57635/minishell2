/*
** EPITECH PROJECT, 2023
** strlen
** File description:
** task03
*/
#include <unistd.h>

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
