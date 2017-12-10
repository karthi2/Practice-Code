#include <stdio.h>
#include <stdlib.h>

typedef struct node *NODE;

struct node {
    int a;
    void *p;  
};

struct node1 {
    int b;
    int c;
};

void print (void *x) {
    struct node1 *y;
    
    y = (char *) x + sizeof(int);

    y = m->p;
}

int main () {
    NODE x = malloc(sizeof(struct node));

    struct node1 y;
    y.b = 10;
    y.c = 20;

    struct node1* z;
    z = &y;

    x->a = 10;
    x->p = z;

    print(x);
}
