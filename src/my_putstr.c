/*
** EPITECH PROJECT, 2023
** putstr
** File description:
** task02
*/
#include <unistd.h>
#include "../include/my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i]; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
