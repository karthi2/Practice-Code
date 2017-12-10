#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i = 0;
    int num = 0;
    int unpaired_num = 0;
    char ch = '\0';
/*    
    do {
        scanf("%d", &num);
        if (i == 0) {
            unpaired_num = num;
            i++;
            continue;
        }
        unpaired_num = num ^ unpaired_num;
        i++;
        
        if ((scanf("%c", &ch)) != 1) {
            break;
        }
    } while (1);
    
    printf("%d\n", unpaired_num);
  */  
    printf("%lu\n", sizeof(unsigned long long int));
    return 0;
}
