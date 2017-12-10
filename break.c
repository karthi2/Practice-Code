#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
	int a = atoi(argv[1]);
	while(1) {
		switch(a) {
			case 10:
				printf("%d\n", a);
				break;

			default:
				break;
		}
	}
	printf("Does this get printed?\n");

    char *keyword = "mid";

    int board_type = 1;

    if (board_type == 1 ||
        board_type == 2) {
        if (!strcmp(keyword, "mid")) {
            break;
        }

        printf("It did not work\n");
    }

    printf("Break may have worked\n");

	return 0;
}
