/*
** EPITECH PROJECT, 2019
** algo
** File description:
** All funcctions linked to the algo.
*/

#include <stddef.h>
#include "my.h"
#include "pushswap.h"
#include "operation.h"

void find_lower_nb(list_t **lower, list_t **l_a)
{
    list_t *tmp = *l_a;
    list_t *low = *lower;

    while (tmp != NULL) {
        if (low->number > tmp->number)
            low = tmp;
        tmp = tmp->next;
    }
    *lower = low;
}

void put_in_front(list_t **l_a, list_t *lower)
{
    list_t *tmp = *l_a;

    while (tmp->number != lower->number) {
        ra(l_a);
        my_putstr("ra ");
        tmp = *l_a;
    }
}
