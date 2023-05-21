/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_putchar
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Print a character.
 * @param c
 */
void my_putchar(char c)
{
    write(1, &c, 1);
}
