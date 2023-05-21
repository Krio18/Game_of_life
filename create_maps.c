/*
** EPITECH PROJECT, 2023
** create_maps
** File description:
** epitech > 42
*/

#include "includes/stumper.h"

char **create_map(char **av)
{
    struct stat sb;
    char *maps_1d;
    char **maps;

    stat(av[1], &sb);
    maps_1d = open_file(av, &sb);
    maps = my_str_to_tab(maps_1d);

    free(maps_1d);
    return maps;
}
