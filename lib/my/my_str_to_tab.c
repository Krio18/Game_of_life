/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_str_to_tab
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle
 * @param str
 * @return int
 */
int count_words(char *str)
{
    int count_word = 1;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '\n')
            count_word++;
    }
    return count_word;
}

/**
 * @brief
 * #killian cottrelle | Take char * and scale it in char **.
 * Return a char **.
 * @param str
 * @return char**
 */
char **my_str_to_tab(char *str)
{
    int nb_words = count_words(str);
    char **tab = malloc(sizeof(char *) * (nb_words + 1));
    int i = 0;
    int j = 0;
    int k = 0;

    tab[nb_words] = NULL;
    for (k = 0; str[k] != '\n'; k++);
    for (int y = 0; y < nb_words; y++) {
        tab[y] = malloc(sizeof(char) * (k + 1));
        for (i = 0; str[j] != '\n' && str[j]; i++, j++)
            tab[y][i] = str[j];
        tab[y][i] = '\0';
        j++;
    }
    return tab;
}
