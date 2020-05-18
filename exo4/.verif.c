#include "exo4.h"

void my_add_node(list_t **list, int var)
{
    list_t *new = malloc(sizeof(list_t));
    new->a = var;
    new->prev = *list;
    new->next = (void*)0;
    *list = new;
}

void cmplist(list_t *a, list_t *b)
{
    while (a && b && a->a == b->a) {
        a = a->prev;
        b = b->prev;
    }
    if (a || b)
        printf("faux\n");
    else
        printf("bravo\n");
}

void verif_function(char **av, list_t *list)
{
    list_t *new = (void*)0;
    int i = 1;
    while (av[i] != NULL) {
        my_add_node(&list, atoi(av[i]));
        i += 1;
    }
    cmplist(list, new);
}
