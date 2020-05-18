#include "exo8.h"

/* 
et hop le retour des le la verification (c'est juste un copier coler de l'exo 2 :p)
plus sérieusement le but est de faire un add_node sans faire de retour
c'est pratique si on a besoin de faire une gestion d'erreur pour verifier l'alloctation sans pour autant quiter le programme
*/

void verif_function(char**, list_t*);

void add_node(list_t **list, int var) // fonction a remplir
{
    return (NULL);
}

int main(int ac, char **av)
{
    int i = 1;
    list_t *list = NULL;
    while (av[i] != NULL) {
        add_node(&list, atoi(av[i]));
        i += 1;
    }
    print_list(list);
    return 0;
}