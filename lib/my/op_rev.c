/*
** EPITECH PROJECT, 2019
** op_rev
** File description:
** ra,rb,rr functions linked to operation.h.
*/

#include <stddef.h>
#include "my.h"
#include "pushswap.h"
#include "operation.h"

void ra(list_t **l_a)
{
    list_t *tmp = *l_a;
    list_t *first = tmp;
    list_t *last = tmp;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    first = first->next;
    tmp->next = last;
    last->next = NULL;
    *l_a = first;
}

void rb(list_t **l_b)
{
    list_t *tmp = *l_b;
    list_t *first = tmp;
    list_t *last = tmp;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    first = first->next;
    tmp->next = last;
    last->next = NULL;
    *l_b = first;
}

void rr(list_t **l_a, list_t **l_b)
{
    ra(l_a);
    rb(l_b);
}

/*
void ra(list_t **l_a)
{
    list_t *prev = NULL;
    list_t *current = *l_a;
    list_t *next = NULL;

    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
	current = next;
    }
    *l_a = prev;
    }*/
