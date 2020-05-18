#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct list_s {
    int a;
    struct list_s *next;
    struct list_s *prev;
}list_t;
