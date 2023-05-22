/*
** EPITECH PROJECT, 2023
** main
** File description:
** vim-epitech made by x4m3
*/

#include "../includes/stumper.h"

void free_memorie(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        free(map[i]);
    free(map);
}

int main(int ac, char **av)
{
    char **map;
    int count = 0;

    if (ac == 1) {
        count = 200;
        map = generation();
    }
    if (ac == 3) {
        count = atoi(av[2]);
        map = create_map(av);
    }
    for (int i = 0; i < count; i++)
        edit_maps(map);
    my_put_array(map);

    free_memorie(map);

    return 0;
}
