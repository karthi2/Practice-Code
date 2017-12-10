#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv)  {
    int nums[] = {0};

    int i = 0;
    int count = 0;
    int max_count = 0;
    int start_index = -1;
    int end_index = -1;
    int one_found = 0;
    
    for (i = 0; i < sizeof(nums)/sizeof(int); i++) {
        if (nums[i] == 1) {
            one_found = 1;
            if (start_index == -1) {
                start_index = i;
                end_index = i;
            } else {
                end_index = i;
            }
        } else {
            if (one_found) {
                count = end_index - start_index + 1;
            }
            if (count > max_count) {
                max_count = count;
            }
            
            start_index = -1;
            end_index = -1;
        }
    }

    if (one_found) {
        count = end_index - start_index + 1;
        max_count = (count > max_count) ? count : max_count;
    }

    printf("%d\n", max_count);
    return 0;
}
