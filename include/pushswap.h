/*
** EPITECH PROJECT, 2019
** operation.h
** File description:
** Header for all the operations to sort an array.
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

typedef struct s_list {
    int number;
    struct s_list *next;
} list_t;

void *my_put_in_list(list_t **list, int number);
void my_show_list(list_t *list);

#endif /* PUSHSWAP_H_ */
