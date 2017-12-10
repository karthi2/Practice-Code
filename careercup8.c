 #include <stdio.h>

int main () {
    int i = 0;

    FILE *fp = fopen("careercup8.txt", "w");
    for (i = 0; i < 1000000; i++) {
        fprintf(fp, "%d\n", i);
    }
    fclose (fp);
    return 0;
}
