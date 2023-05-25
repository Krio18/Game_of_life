/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_getnbr
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Take and transforme a number in str to int.
 * Return a number.
 * @param str
 * @return int
 */
int my_getnbr(char const *str)
{
    int result = 0;
    int isneg = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] > '9' || str[i] < '0') {
            my_putstr("Please enter a number.\n");
            exit(84);
        }
        if (str[i] == '-')
            isneg = 1;
        if (str[i] >= '0' && str[i] <= '9')
            result = result * 10 + (str[i] - '0');
    }
    if (isneg == 1)
        result *= -1;
    return result;
}
