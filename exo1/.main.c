#include "exo1.h"

main_struct_t *feed_struct(int, int);

int main(void)
{
    main_struct_t *var = feed_struct(1, 2);
    if (var->varA->var != 1 || var->varB->var != 2)
        printf("faux\n");
    else
        printf("bravo\n");
}