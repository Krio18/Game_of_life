/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-killian.cottrelle
** File description:
** my_open_file
*/

#include "my.h"

/**
 * @brief
 * killian cottrelle | open and read a file, for put it in a buffer.
 * (don't forget to free buffer)
 * @param ac
 * @param av
 * @param sb
 * @return char *
 */
char *open_file(char **av, struct stat *sb)
{
    char *buffer = malloc(sizeof(char) * (sb->st_size + 1));
    int fb = open(av[1], O_RDONLY);

    if (fb == -1)
        return buffer;
    read(fb, buffer, sb->st_size);
    close(fb);

    buffer[sb->st_size] = '\0';

    return buffer;
}
