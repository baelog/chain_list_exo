#include "exo4.h"

/* 
dans cette exercire le but est de faire une queue c'est a dire de metre le dernier element 
ajouter dans la fin de la list

si la liste s'affiche a l'endroit c'est juste
*/

void print_list(list_t*);

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