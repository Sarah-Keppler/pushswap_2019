/*
** EPITECH PROJECT, 2019
** op_rrev
** File description:
** rra,rrb,rrr functions linked to operation.h.
*/

#include <stddef.h>
#include "my.h"
#include "pushswap.h"
#include "operation.h"

void rra(list_t **l_a)
{
    list_t *last = *l_a;
    list_t *tmp = NULL;

    while (last->next != NULL) {
        tmp = last;
        last = last->next;
    }
    tmp->next = NULL;
    last->next = *l_a;
    *l_a = last;
}

void rrb(list_t **l_b)
{
    list_t *last = *l_b;
    list_t *tmp = NULL;

    while (last->next != NULL) {
        tmp = last;
        last = last->next;
    }
    tmp->next = NULL;
    last->next = *l_b;
    *l_b = last;
}

void rrr(list_t **l_a, list_t **l_b)
{
    rra(l_a);
    rrb(l_b);
}
