#include "exo4.h"

/* 
dans cette exercire le but est de faire une queue c'est a dire de metre le dernier element 
ajouter dans la fin de la list
*/

void verif_function(char**, list_t*);

list_t *add_node(list_t *list, int var) // fonction a remplir
{
    return (NULL);
}

int main(int ac, char **av)
{
    char **cpy_av = av; // pas toucher a cette valeur svp
    int i = 1;
    list_t *list = NULL;
    while (av[i] != NULL) {
        list = add_node(list, atoi(av[i]));
        i += 1;
    }
    verif_function(cpy_av, list);
    return 0;
}