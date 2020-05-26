/*
** EPITECH PROJECT, 2019
** error
** File description:
** All functions linked to the deal_errors.
*/

#include "my.h"

int how_many_negative_signs(char *str)
{
    int number = 0;
    char *strcpy = str;

    while ('\0' != *str) {
        if ('-' == *str)
            ++number;
        ++str;
    }
    if (strcpy[0] != '-' && number >= 1)
        return (number);
    return (number);
}

int my_str_isnum_with_neg(char const *str)
{
    while ('\0' != *str) {
        if (!('0' <= *str && '9' >= *str) && '-' != *str)
            return (0);
        ++str;
    }
    return (1);
}
