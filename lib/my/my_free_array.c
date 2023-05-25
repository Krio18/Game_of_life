/*
** EPITECH PROJECT, 2023
** B-PSU-200-LYN-2-1-minishell2-killian.cottrelle
** File description:
** free_array
*/

#include "my.h"

void my_free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
