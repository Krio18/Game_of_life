/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_put_array
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Print a tab/array.
 * @param tab
 */
void my_put_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        if (tab[i + 1] == NULL)
            return;
        write(1, "\n", 1);
    }
}
