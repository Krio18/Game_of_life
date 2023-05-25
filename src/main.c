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

    if (ac > 2)
        return 84;
    if (ac == 1) {
        count = 200;
        map = generation();
    }
    if (ac == 2) {
        count = my_getnbr(av[1]);
        map = generation();
    }
    for (int i = 0; i < count; i++)
        edit_maps(map);

    my_free_array(map);

    return 0;
}
