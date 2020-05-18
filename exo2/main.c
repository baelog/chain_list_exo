#include "exo2.h"

/* 
dans cette exercice le principe est simple metre {a} dans {varA} et {b} dans {varB}
et de retourné la stucture initial
*/

void verif_function(char**, list_t*);

list_t *add_node(list_t *list, int var)
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