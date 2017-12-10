#include <strings.h>
#include <stdio.h>

int
strcasecmp( const char *s1, const char *s2 ) {
    unsigned char       c1;
    unsigned char       c2;

    for( ;; ) {
        c1 = *s1;
        c2 = *s2;
        if(c1 >= 'A' && c1 <= 'Z') c1 += 'a' - 'A';
        if(c2 >= 'A' && c2 <= 'Z') c2 += 'a' - 'A';
        if(c1 != c2) {
            /*
                Subtlely different behaviour from stricmp, but it's
                mandated by Unix 98.
            */
            return(c1 - c2);
        }
        if(c1 == '\0') return(0);
        ++s1;
        ++s2;
    }
}

int main (int argc, char **argv) {
    char *string1 = argv[1];
    char *string2 = argv[2];

    int rc = strcasecmp(string1, string2);

    if(rc == 0) {
	printf("string1 = string2\n");
    } else {
	printf("string1 != string2\n");
    }

    return 0;
}
