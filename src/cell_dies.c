/*
** EPITECH PROJECT, 2023
** cell_dies
** File description:
** hello world?
*/

#include "includes/stumper.h"

char cell_die(char **maps, int i, int j, int nb_cell)
{
    if ((nb_cell != 2 && nb_cell != 3) && maps[i][j] == 'X')
        maps[i][j] = '1';

    return maps[i][j];
}
