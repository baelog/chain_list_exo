#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct tree_s {
    int a;
    struct tree_s *parent;
    struct tree_s *left;
    struct tree_s *right;

}tree_t;
