/*
** EPITECH PROJECT, 2023
** edit_maps
** File description:
** you're a bad developer
*/

#include "includes/stumper.h"

char edit_maps_bin(char **maps, int i, int j)
{
    if (maps[i][j] == '0')
        maps[i][j] = 'X';
    if (maps[i][j] == '1')
        maps[i][j] = '.';

    return maps[i][j];
}

char new_cell(char **maps, int i, int j, int nb_cell)
{
    if (maps[i][j] == 'X')
        return maps[i][j];
    if (nb_cell == 3)
        maps[i][j] = '0';

    return maps[i][j];
}

char **maps_bin(char **maps)
{
    for (int i = 0; maps[i] != NULL; i++)
        for (int j = 0; maps[i][j] != '\0'; j++)
            maps[i][j] = edit_maps_bin(maps, i, j);

    return maps;
}

char **edit_maps(char **maps)
{
    int nb_cell = 0;

    for (int i = 0; maps[i] != NULL; i++) {
        for (int j = 0; maps[i][j] != '\0'; j++) {
            nb_cell = 0;
            nb_cell = make_action(maps, i, j, nb_cell);
            maps[i][j] = new_cell(maps, i, j, nb_cell);
            maps[i][j] = cell_die(maps, i, j , nb_cell);
        }
    }
    maps_bin(maps);

    return maps;
}
