/*
** EPITECH PROJECT, 2023
** B-CPE-210-LYN-2-1-stumper2-killian.cottrelle
** File description:
** stumper
*/

#ifndef STUMPER_H_
    #define STUMPER_H_
    #define _GNU_SOURCE 1
    #include "my.h"
    #include <string.h>
    #include <time.h>
    char **create_map(char **av);
    char **edit_maps(char **maps);
    char cell_die(char **maps, int i, int j, int nb_cell);
    char **maps_bin(char **maps);
    int make_action(char **maps, int i, int j, int nb_cell);
    char **generation(void);

#endif /* !STUMPER_H_ */
