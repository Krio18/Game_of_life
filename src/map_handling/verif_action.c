/*
** EPITECH PROJECT, 2023
** action
** File description:
** don't forget to free at the end
*/

#include "../../includes/stumper.h"

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
