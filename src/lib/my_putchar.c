/*
** EPITECH PROJECT, 2021
** B-CPE-300-BDX-3-1-pushswap-edouard.belhomme [WSL: Manjaro]
** File description:
** my_putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
