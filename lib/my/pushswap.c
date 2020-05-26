/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** All functions linked to pushswap.h.
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"
#include "pushswap.h"
#include "operation.h"

void *my_put_in_list(list_t **list, int number)
{
    list_t *element = malloc(sizeof(list_t));

    if (element == NULL) {
        return (NULL);
    }
    element->number = number;
    element->next = *list;
    *list = element;
}

void my_show_list(list_t *list)
{
    list_t *tmp = list;

    while (tmp != NULL) {
        my_put_nbr(tmp->number);
        my_putchar('\n');
        tmp = tmp->next;
    }
}
