#include <stdio.h>
#include <string.h>

#define A 16
#define B 6
#define C (A * \
            + B)
#define SAY_HELLO(name, platform)    \
    if (strcmp(platform, "fretta") == 0) { \
        say_hello(name);    \
    } else { \
        say_hello("No One");    \
    }

void say_hello (char *name) {
    printf("%s\n", name);
}

int main ()
{
    int a = C;
    printf("%d\n", a);

    SAY_HELLO("Karthik", "fretta");
    SAY_HELLO("New User", "None");
    return 0;
}
