/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-edouard.belhomme
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (; *str; str++)
        my_putchar(*str);
    return (*str);
}
