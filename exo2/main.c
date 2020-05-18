#include "exo2.h"

/* 
dans cette exercire le but est de faire eune stack c'est a dire de metre le dernier element 
ajouter dans le debut de la list

si la list s'afiche a l'enver alors c'est bon
*/

void print_list(list_t *list);

list_t *add_node(list_t *list, int var) // fonction a remplir
{
    return (NULL);
}

int main(int ac, char **av)
{
    int i = 1;
    list_t *list = NULL;
    while (av[i] != NULL) {
        list = add_node(list, atoi(av[i]));
        i += 1;
    }
    print_list(list);
    return 0;
}