/*
** EPITECH PROJECT, 2023
** edit_maps
** File description:
** you're a bad developer
*/

#include "../../includes/stumper.h"

char new_cell(char **maps, int i, int j, int nb_cell)
{
    if (maps[i][j] == 'X')
        return maps[i][j];
    if (nb_cell == 3)
        maps[i][j] = '0';

    return maps[i][j];
}

int make_action(char **maps, int i, int j, int nb_cell)
{
    if (j - 1 >= 0 && i - 1 >= 0)
        nb_cell += x_verif(maps, (i - 1), (j - 1));
    if (i - 1 >= 0)
        nb_cell += x_verif(maps, (i - 1), (j));
    if (i - 1 >= 0 && j + 1 <= my_strlen(maps[i]))
        nb_cell += x_verif(maps, (i - 1), (j + 1));
    if (j - 1 >= 0)
        nb_cell += x_verif(maps, (i), (j - 1));
    if (j + 1 <= my_strlen(maps[i]))
        nb_cell += x_verif(maps, (i), (j + 1));
    if (i + 1 <= my_array_length(maps) && j - 1 >= 0)
        nb_cell += x_verif(maps, (i + 1), (j - 1));
    if (i + 1 <= my_array_length(maps))
        nb_cell += x_verif(maps, (i + 1), (j));
    if (i + 1 <= my_array_length(maps) && j + 1 <= my_strlen(maps[i]))
        nb_cell += x_verif(maps, (i + 1), (j + 1));
    return nb_cell;
}

char cell_die(char **maps, int i, int j, int nb_cell)
{
    if ((nb_cell != 2 && nb_cell != 3) && maps[i][j] == 'X')
        maps[i][j] = '1';

    return maps[i][j];
}

char **edit_maps(char **maps)
{
    int nb_cell = 0;
    const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";

    for (int i = 0; maps[i] != NULL; i++) {
        for (int j = 0; maps[i][j]; j++) {
            nb_cell = 0;
            nb_cell = make_action(maps, i, j, nb_cell);
            maps[i][j] = new_cell(maps, i, j, nb_cell);
            maps[i][j] = cell_die(maps, i, j , nb_cell);
        }
    }

    maps_restor(maps);
    my_put_array(maps);

    usleep(20000);
    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 11);

    return maps;
}
