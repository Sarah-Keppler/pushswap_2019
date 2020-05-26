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
    }


void rra(list_t **l_a)
{
    list_t *last = *l_a;
    list_t *tmp = NULL;
    list_t *first = last;

    while (last->next != NULL) {
        tmp = last;
        last = last->next;
    }
    last->next = first->next;
    tmp->next = first;
    first->next = NULL;
    *l_a = last;
}

void rrb(list_t **l_b)
{
    list_t *last = *l_b;
    list_t *tmp = NULL;
    list_t *first = last;

    while (last->next != NULL) {
        tmp = last;
        last = last->next;
    }
    last->next = first->next;
    tmp->next = first;
    first->next = NULL;
    *l_b = last;
    }

void ra(list_t **l_a)
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

void rra(list_t **l_a)
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
    }*/
