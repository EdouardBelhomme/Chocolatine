/*
** EPITECH PROJECT, 2021
** B-CPE-100-BDX-1-1-cpoolday04-edouard.belhomme
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int index = 0;

    while (str[index] != '\0')
        index++;
    return index;
}
