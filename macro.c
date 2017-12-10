#include <stdio.h>

typedef enum random {
	JAN,
	FEB,
	MARCH
} random_enum;

#define VALUE (random_enum)+10

int main() {
	printf("%d\n", VALUE);
	return 0;
}
