/*
** EPITECH PROJECT, 2019
** bootstrap_pushswap
** File description:
** We can finsih the project with this
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "include/my.h"
#include "include/pushswap.h"
#include "include/operation.h"

void put_arg_in_list(int ac, char **av, list_t **list)
{
    int number = 0;
    
    for (int i = ac - 1; i > 0; --i) {
        number = my_getnbr(av[i]);
        my_put_in_list(list, number);
    }
}

_Bool deal_errors(int ac, char **av)
{
    if (ac < 2) {
        my_putstr("Wrong numbers of arguments -- Error\n");
        return (84);
    }
    for (int i = 1; ac > i; ++i) {
        if (1 < how_many_negative_signs(av[i])) {
            my_putstr("Wrong arguments -- Error\n");
            return (false);
        }
        if (0 == my_str_isnum_with_neg(av[i])) {
            my_putstr("Wrong arguments -- Error\n");
            return (false);
        }
    }
    return (true);
}

_Bool special_cases(list_t **l_a, int ac, char **av)
{
    int nb = 0;
    list_t *tmp = *l_a;

    if (ac == 2) {
        my_putchar('\n');
        return (true);
    }
    while (tmp->next != NULL) {
        if (tmp->number <= tmp->next->number) {
            ++nb;
        }
        tmp = tmp->next;
    }
    if (nb == (ac - 2)) {
        my_putchar('\n');
        return (true);
    }
    return (false);
}

void algo(list_t **l_a, list_t **l_b)
{
    list_t *tmp = *l_a;
    list_t *lower = tmp;

    while (tmp->next != NULL) {
        lower = tmp;
        find_lower_nb(&lower, l_a);
        put_in_front(l_a, lower);
        pb(l_a, l_b);
        my_putstr("pb ");
    }
    while (*l_b != NULL) {
        pa(l_a, l_b);
        if (*l_b == NULL)
            my_putstr("pa\n");
        else
            my_putstr("pa ");
    }
}

int main(int ac, char **av)
{
    list_t *l_a = NULL;
    list_t *l_b = NULL;

    if (false == deal_errors(ac, av))
        return (84);
    put_arg_in_list(ac, av, &l_a);
    if (true == special_cases(&l_a, ac, av))
        return (0);
    algo(&l_a, &l_b);
    return (0);
}
