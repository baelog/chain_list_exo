#include "exo2.h"

void print_list(list_t *list)
{
    while (list) {
        printf("%d\n", list->a);
        list = list->next;
    }
}