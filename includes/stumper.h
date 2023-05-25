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
    int x_verif(char **maps, int i, int j);
    char **edit_maps(char **maps);
    char **maps_restor(char **maps);
    char **generation(void);

#endif /* !STUMPER_H_ */
