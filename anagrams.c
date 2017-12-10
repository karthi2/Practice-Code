#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[4] = {'a', 'b', 'c', 'd'};

void swapc (int index, int i)
{
    char temp = str[index];
    str[index] = str[i];
    str[i] = temp;
};

void permutate(char* str, size_t index)
{
    size_t i = 0;
    size_t slen = strlen(str);
    char lastChar = 0;

    if (index == slen)
    {
        puts(str);
        return;
    }

    for (i = index; i < slen; i++)
    {
        if (lastChar == str[i]) {
            continue;
        } else {
            lastChar = str[i];
        }

        swapc(index, i);
        permutate(str, index + 1);
        swapc(index, i);
    }
}

int main (int argc, char **argv) {
    permutate(str, 0);
    return 0;
}
