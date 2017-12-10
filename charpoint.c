#include <stdio.h>
#include <string.h>

int main () {
    struct hello {
        char *message;
    } hello1;

    memset(&hello1, 0, sizeof(struct hello));
    hello1.message = "Board reload on exceeding interrupt threshold....whatever you want to do here";

    printf("%s\n", hello1.message);
    return 0;
}   
