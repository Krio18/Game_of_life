/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-pushswap-killian.cottrelle
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #define _GNU_SOURCE 1
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/stat.h>

    int my_getnbr(char const *str);
    void my_put_array(char **tab);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char *str);
    int my_strlen(char const *str);
    char **my_str_to_tab(char *str);
    char *open_file(char **av, struct stat *sb);

#endif
