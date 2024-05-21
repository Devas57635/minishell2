/*
** EPITECH PROJECT, 2023
** strcat
** File description:
** lib/my
*/

char *my_strcat(char *dest, char const *src)
{
    char *p = dest;

    for (; p[0] != '\0'; p++);
    while (src[0] != '\0') {
        p[0] = src[0];
        p++;
        src++;
    }
    p[0] = '\0';
    return (dest);
}
