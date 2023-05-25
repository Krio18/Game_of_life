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

    int my_getnbr(char const *str);
    void my_put_array(char **tab);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char *str);
    int my_strlen(char const *str);
    int my_array_length(char **tab);
    char **my_str_to_tab(char *str);
    char *open_file(char **av, struct stat *sb);
    void my_free_array(char **array);

#endif
