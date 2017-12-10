#include <stdio.h>
#include <stdlib.h>

typedef char uint8_t;

void * memory_alloc () {
	void *attr_array = (void *) malloc (10 * sizeof(char));
	return attr_array;
}

int main () {
	uint8_t *fixed_len_val_ptr = NULL;
	uint8_t *attr_val_array = NULL;

	int val = 30;
	void  *array_val = &val;

	attr_val_array = memory_alloc();

	fixed_len_val_ptr = attr_val_array + 10;
	*(int *) fixed_len_val_ptr = *(int *) array_val;

	printf("%d\n", *fixed_len_val_ptr);
	return 0;
}
