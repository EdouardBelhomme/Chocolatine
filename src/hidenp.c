/*
** EPITECH PROJECT, 2022
** Slo stumper 2
** File description:
** hidenp
*/

#include "my.h"

int hidenp(char const *str_1, char const *str_2)
{
    int len_str_1 = my_strlen(str_1);
    int nb_letters = 0;
    int tmp = 0;

    if (!str_1 || !str_2)
        return ERROR;
    for (int i = 0; str_2[i] != '\0'; i++) {
        if ((str_2[i] == str_1[tmp]) && (str_1)) {
            nb_letters++;
            tmp++;
        }
        if (nb_letters == len_str_1) {
            my_putstr("1\n");
            return SUCCESS;
        }
    }
    my_putstr("0\n");
    return ERROR;
}
