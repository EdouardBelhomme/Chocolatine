/*
** EPITECH PROJECT, 2022
** Slo stumper 2
** File description:
** hidenp
*/

#include "my.h"

int hidenp(char const *needle, char const *haystack)
{
    int index_needle = 0;
    int size_needle = my_strlen(needle);

    if (!needle || !haystack)
        return 84;
    for (int index_hay = 0; haystack[index_hay] != '\0'; index_hay++) {
        if (index_needle == size_needle)
            return 0;
        else if (needle[index_needle] == haystack[index_hay])
            index_needle++;
    }
    return 1;
}
