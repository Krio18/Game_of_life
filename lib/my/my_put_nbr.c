/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_put_nbr
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Print a number.
 * @param nb
 */
void my_put_nbr(int nb)
{
    int mod = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            mod = (nb % 10);
            nb = (nb - (int)mod) / 10;
            my_put_nbr(nb);
            my_putchar((char)(48 + mod));
        } else
            my_putchar(48 + nb % 10);
    }
}
