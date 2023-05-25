
#include "../../includes/stumper.h"

char edit_maps_bin(char **maps, int i, int j)
{
    if (maps[i][j] == '0')
        maps[i][j] = 'X';
    if (maps[i][j] == '1')
        maps[i][j] = '.';

    return maps[i][j];
}

char **maps_restor(char **maps)
{
    for (int i = 0; maps[i] != NULL; i++)
        for (int j = 0; maps[i][j] != '\0'; j++)
            maps[i][j] = edit_maps_bin(maps, i, j);

    return maps;
}
