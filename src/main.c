/*
** EPITECH PROJECT, 2021
** ebelhomme
** File description:
** main
*/

#include "my.h"

int main(int ac, char const **av)
{
    if (ac != 3)
        return ERROR;
    hidenp(av[1], av[2]);
    return SUCCESS;
}
