/*
** EPITECH PROJECT, 2023
** Game_of_life
** File description:
** generation
*/

#include "../includes/stumper.h"

void full_map(int fd, int x)
{
    int chose;

    chose = rand() % 5;
    if (x == 99)
        write(fd, "\n", 1);
    else {
        if (chose == 4)
            write(fd, "X", 1);
        else
            write(fd, ".", 1);
    }
}

char **generation(void)
{
    char *maps_1d;
    char **maps;
    int fd = open("tmp.txt", O_RDWR | O_CREAT , 0777);
    struct stat sb;

    stat("tmp.txt", &sb);
    maps_1d = malloc(sizeof(char) * (sb.st_size + 1));
    srand(time(NULL));
    for (int y = 0; y < 40; y++) {
        for (int x = 0; x < 100; x++)
            full_map(fd, x);
    }
    lseek(fd, 0, SEEK_SET);
    read(fd, maps_1d, sb.st_size);
    close(fd);
    maps_1d[sb.st_size] = '\0';
    maps = my_str_to_tab(maps_1d);

    free(maps_1d);
    return maps;
}
