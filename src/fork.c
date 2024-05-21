/*
** EPITECH PROJECT, 2024
** B-PSU-200-NCY-2-1-minishell1-antoine.schoeser
** File description:
** fork
*/

#include "../include/my.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
#include <sys/wait.h>
#include "../include/list.h"
#include <stdlib.h>

void *my_memset(void *value, int c, size_t size)
{
    char *str = value;

    for (int i = 0; i < (int)size; i++)
        str[i] = c;
    value = str;
    return value;
}

int exec(general_t *mp, char **env)
{
    int s = 0;

    for (int i = 0; mp->tab[i]; i++)
        s++;
    mp->tik = malloc(sizeof(char *) * (s + 1));
    for (int i = 0; mp->tab[i]; i++) {
        mp->tik[i] = malloc(my_strlen(mp->take[0]) +
        my_strlen(mp->tab[i]) + 2);
        mp->tik[i] = my_memset(mp->tik[i], 0,
        my_strlen(mp->take[0]) + my_strlen(mp->tab[i]) + 2);
        mp->tik[i] = my_strcat(my_strcat(my_strcat(mp->tik[i],
        mp->tab[i]), "/"), mp->take[0]);
        if (access(mp->tik[i], X_OK) == 0) {
            execve(mp->tik[i], mp->take, env);
            free(mp->tik);
            return 1;
        }
    }
    my_printf("%s: Command not found.\n", mp->token);
    return 0;
}

char *all_for_fork(general_t *mp, char **env)
{
    int l = 0;

    l = exec(mp, env);
    if (l == 0) {
        free(mp->tik);
        exit(84);
    }
    return 0;
}

int moov(general_t *mp, char **env)
{
    if (chdir(mp->take[1]) != 0)
        perror("cd");
}

int born(general_t *mp, char **env)
{
    mp->troll = str_word_array(mp->token, ';');
    for (int i = 0; mp->troll[i]; i++) {
        if (my_strncmp(mp->token, "cd", 2) == 0)
            moov(mp, env);
        if (my_strncmp(mp->token, "setenv", 6) == 0) {
            print_env(env);
        } else if (my_strncmp(mp->token, "unsetenv", 8) == 0){
            return 0;
        } else {
            view_access(mp, env);
        }
    }
    return 0;
}
