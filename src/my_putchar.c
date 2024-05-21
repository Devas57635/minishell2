/*
** EPITECH PROJECT, 2023
** putchar
** File description:
** all task
*/

#include "../include/my.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
