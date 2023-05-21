/*
** EPITECH PROJECT, 2023
** action
** File description:
** don't forget to free at the end
*/

#include "../includes/stumper.h"

int x_verif(char **maps, int i, int j)
{
    int count = 0;

    if (i >= 0 && i <= my_strlen(maps[i]) &&
    j >= 0 && j <= my_strlen(maps[i])) {
        if (maps[i][j] == 'X' || maps[i][j] == '1')
            count++;
    }
    return count;
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
    if (i + 1 <= my_strlen(maps[i]) && j - 1 >= 0)
        nb_cell += x_verif(maps, (i + 1), (j - 1));
    if (i + 1 <= my_strlen(maps[i]))
        nb_cell += x_verif(maps, (i + 1), (j));
    if (i + 1 <= my_strlen(maps[i]) && j + 1 <= my_strlen(maps[i]))
        nb_cell += x_verif(maps, (i + 1), (j + 1));
    return nb_cell;
}
