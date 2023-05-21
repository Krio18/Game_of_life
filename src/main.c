/*
** EPITECH PROJECT, 2023
** main
** File description:
** vim-epitech made by x4m3
*/

#include "../includes/stumper.h"

int main(int ac, char **av)
{
    char **map;
    int count = 0;

    if (ac == 3) {
        count = atoi(av[2]);
        map = create_map(av);
        for (int i = 0; i < count; i++)
            edit_maps(map);
        my_put_array(map);
        for (int i = 0; map[i] != NULL; i++)
            free(map[i]);
        free(map);
    } else
        return 1;
    return 0;
}
