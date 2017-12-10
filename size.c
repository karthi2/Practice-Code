#include <stdio.h>

struct debug_event_type_ {
    int a;
    int b;
    char c;
    long d;
};

typedef struct debug_event_type_ debug_event_type;

debug_event_type var[] = {};

int main () {
    printf("%d\n", sizeof(var));
    return 0;
}
