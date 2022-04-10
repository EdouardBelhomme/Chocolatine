/*
** EPITECH PROJECT, 2022
** Solo Stumper 2
** File description:
** tests
*/

#include <criterion/criterion.h>

void my_putchar(char c);
int my_putstr(char const *str);

Test(my_putchar, test_c)
{
    char c = 'a';

    cr_assert_char_eq(my_putchar(c), 'a');
}

Test(my_putstr, test_str)
{
    char const str[13] = "Hello world !\n";

    cr_assert_str_eq(my_putstr(str), Hello world !\n);
}
