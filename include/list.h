/*
** EPITECH PROJECT, 2024
** B-PSU-200-NCY-2-1-minishell1-antoine.schoeser
** File description:
** list
*/

#ifndef LIST_H_
    #define LIST_H_

    #include <unistd.h>
    #include <stdio.h>
    #include <string.h>
    #include <errno.h>
    #include <assert.h>
    #include <sys/wait.h>
    #include <stdlib.h>

typedef struct env_s {
    char *path;
    char *cont;
    struct env_s *next;
} env_t;

typedef struct general_s {
    char *token;
    char **take;
    char **tab;
    char **troll;
    char **tik;
} general_t;

#endif
