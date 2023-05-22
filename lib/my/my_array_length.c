/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_array_length
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Count the number of line in tab/array.
 * Return the length of the tab.
 * @param tab
 * @return int
 */
int my_array_length(char **tab)
{
    int length = 0;
    for (int i = 0; tab[i] != NULL; i++, length++);
    return length;
}
