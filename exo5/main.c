#include "exo3.h"

/* 
dans cette exercire le but est de faire une queue c'est a dire de metre le dernier element 
ajouter dans le debut de la list puis de la detruire
dans cette exercice si vous avez bien fait le precedant ca ne devrais pas 
etre trop compliquer

PAS DE VERIFICATION juste vautre meilleur valgringd pour voir les octets perdu
(c'est le me principe que l'affichage)
atention aussi au 2eme pointer dans ce cas il ne dervrais pas deranger mais si vous
faites pas attention il peut tout detruire
*/

list_t *add_node(list_t *list, int var) // fonction a remplir
{
    return (NULL);
}

void delete_list(list_t *list) // fonction a remplir
{

}

int main(int ac, char **av)
{
    int i = 1;
    list_t *list = NULL;
    while (av[i] != NULL) {
        list = add_node(list, atoi(av[i]));
        i += 1;
    }
    delete_list(list);
    return 0;
}