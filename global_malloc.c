#include <stdio.h>
#include <stdlib.h>

typedef struct malloc_trace mallocs;
struct malloc_trace {
    char *func;
    int size;
    void *addr;
    int rd_index;
    int nfn_add;
    char *type;
};
mallocs last_malloc;

last_malloc.func = (char *) malloc (100 * sizeof(char));
last_malloc.type = (char *) malloc (100 * sizeof(char));

int main () {
	last_malloc.func = "main";
	return 0;
}
