/*
** EPITECH PROJECT, 2019
** op_swap
** File description:
** All swap functions linked to operation.h.
*/

#include <stddef.h>
#include "my.h"
#include "pushswap.h"
#include "operation.h"

void swap_elem(int *a, int *b)
{
    int save = *a;

    *a = *b;
    *b = save;
}

void sa(list_t *list)
{
    list_t *tmp = list;

    if (!(tmp == NULL || tmp->next == NULL))
        swap_elem(&tmp->number, &tmp->next->number);
}

void sb(list_t *list)
{
    list_t *tmp = list;

    if (!(tmp == NULL || tmp->next == NULL))
        swap_elem(&tmp->number, &tmp->next->number);
}

void sc(list_t *l_a, list_t *l_b)
{
    sa(l_a);
    sb(l_b);
}
