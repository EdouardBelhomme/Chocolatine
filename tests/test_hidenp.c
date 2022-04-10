/*
** EPITECH PROJECT, 2022
** Solo Stumper2
** File description:
** test
*/

#include <criterion/criterion.h>

int hidenp(char const *needle, char const *haystack);

Test(hidenp_1, ok)
{
    char needle[] = "Hello";
    char haystack[] = "Hello world!";

    cr_assert(hidenp(needle, haystack) == 0);
}

Test(hidenp_2, nope)
{
    char const str_1[] = "abc";
    char const str_2[] = "aubtj";

    cr_assert(hidenp(str_1, str_2) == 1);
}
