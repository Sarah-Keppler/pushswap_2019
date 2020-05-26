/*
** EPITECH PROJECT, 2019
** op_put
** File description:
** All put functions linked to operation.h.
*/

#include <stddef.h>
#include "my.h"
#include "pushswap.h"
#include "operation.h"

void pa(list_t **l_a, list_t **l_b)
{
    list_t *tmp = *l_b;
    list_t *save = tmp->next;

    if (tmp != NULL) {
        tmp->next = *l_a;
        *l_a = tmp;
        *l_b = save;
    }
}

void pb(list_t **l_a, list_t **l_b)
{
    list_t *tmp = *l_a;
    list_t *save = tmp->next;

    if (tmp != NULL) {
        tmp->next = *l_b;
        *l_b = tmp;
        *l_a = save;
    }
}
