#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct main_struct_s {
    struct value_s *varA;
    struct value_s *varB;
}main_struct_t;

typedef struct value_s {
    int var;
}value_t;
