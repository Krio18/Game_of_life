/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #define _GNU_SOURCE 1
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <signal.h>
    #include <string.h>
    #include <fcntl.h>
    #include <sys/wait.h>

    int my_array_length(char **tab);
    int my_getnbr(char const *str);
    void help(char **av);
    void my_put_array(char **tab);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char *str);
    double square_root(double n);
    void my_sprintf(char *str, int nbr);
    char **my_str_to_word_array(char *str);
    char *my_strcpy(char *dest, char const *src);
    int my_strlen(char const *str);
    char *my_strcat(char *dest, const char *src);
    int my_array_length(char **tab);
    int my_strcmp(char const *src1, char const *src2);
    char *my_getenv(char *name, char **envp);
    char **my_str_to_tab(char *str);
    int my_strncmp(char *s1, char *s2, int n);
    char *my_strncpy(char *dest, const char *src, int n);
    char *my_strdup(char *str);
    char *open_file(char **av, struct stat *sb);

#endif
