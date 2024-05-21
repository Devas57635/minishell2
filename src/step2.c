/*
** EPITECH PROJECT, 2024
** B-PSU-200-NCY-2-1-bsminishell1-antoine.schoeser
** File description:
** step2
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

char **get_path(general_t *mp, char **env)
{
    char *where;
    char *path;

    for (int i = 0; env[i] != NULL; i++) {
        if (my_strncmp(env[i], "PATH=", 5) == 0) {
            path = env[i];
            where = path + 5;
            mp->tab = str_word_array(where, ':');
            return mp->tab;
        }
    }
    return NULL;
}

char *view_access(general_t *mp, char **env)
{
    pid_t pid = fork();
    int i = 0;
    int st = 0;

    if (pid == -1) {
        perror("fork");
        exit(84);
    } else if (pid == 0) {
        all_for_fork(mp, env);
    } else {
        wait(&st);
    }
    return 0;
}

void print_env(char **env)
{
    for (int i = 0; env[i] != NULL; i++)
        my_printf("%s\n", env[i]);
}

char *clear_str(general_t *mp)
{
    int len = my_strlen(mp->token) - 1;

    if (mp->token[len] == '\n')
        mp->token[len] = '\0';
    for (int i = 0; mp->token[i]; i++) {
        if (mp->token[i] == '\t')
            mp->token[i] = ' ';
    }
    return (mp->token);
}

int main(int argc, char **argv, char **env)
{
    general_t *mp = malloc(sizeof(general_t));
    size_t size = 0;

    mp->token = NULL;
    mp->tab = get_path(mp, env);
    while (1){
        if (isatty(0) == 1)
            my_printf("$>");
        if (getline(&(mp->token), &size, stdin) == -1)
            return 0;
        mp->token = clear_str(mp);
        mp->take = str_word_array(mp->token, ' ');
        born(mp, env);
    }
    return 0;
}
