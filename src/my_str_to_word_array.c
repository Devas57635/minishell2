/*
** EPITECH PROJECT, 2024
** B-PSU-200-NCY-2-1-minishell1-antoine.schoeser
** File description:
** my_str_to_word_array
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int count(char *str, char sep)
{
    int b = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == sep)
            b++;
    }
    return b;
}

char **str_word_array(char *str, char sep)
{
    int b = count(str, sep) + 1;
    int j = 0;
    int x = 0;
    char **tab = malloc(sizeof(char *) * (b + 2));

    for (int i = 0; str[i] != '\0'; j++) {
        for (; str[i] == sep && str[i] != '\0'; i++);
        if (str[i] == '\0' || tab == NULL)
            break;
        for (x = i; str[x] != sep && str[x] != '\0'; x++);
        tab[j] = malloc(sizeof(char) * (x - i + 2));
        for (x = 0; str[i] != sep && str[i] != '\0'; i++) {
            tab[j][x] = str[i];
            x++;
        }
        tab[j][x] = '\0';
    }
    tab[j] = NULL;
    return tab;
}

void free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
