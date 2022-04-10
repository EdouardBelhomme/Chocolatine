/*
** EPITECH PROJECT, 2022
** Solo Stumper2
** File description:
** test
*/

#include <criterion/criterion.h>

int hidenp(char const *str_1, char const *st_2);

Test(hidenp_1, ok)
{
    char const str_1[3] = "abc";
    char const str_2[6] = "aubtjc";

    cr_assert(hidenp(str_1, str_2) == 0);
}

Test(hidenp_2, nope)
{
    char const str_1[3] = "abc";
    char const str_2[5] = "aubtj";

    cr_assert(hidenp(str_1, str2) == 84);
}
