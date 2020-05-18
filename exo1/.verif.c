#include "exo1.h"

void verif(main_struct_t *var)
{
    if (var->varA->var != 1 || var->varB->var != 2)
        printf("faux\n");
    else
        printf("bravo\n");
}