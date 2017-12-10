#include <stdio.h>

int arr[10] = {1, 3, 5, 6, 10, 14, 20, 89, 1233, 2345};
static int found = 0;

void binary_search (int low, int high, int search_item) {
    int mid = (low + high)/2;

    if ((mid > high) || (mid < low)) {
        printf("Element not found\n");
        return;
    }

    if (search_item == arr[mid]) {
        printf("Element %d found at location %d\n", search_item, mid);
        found = 1;
        return;
    } else if (search_item < arr[mid]) {
        binary_search(low, mid - 1, search_item);
    } else if (search_item > arr[mid]) {
        binary_search(mid+1, high, search_item);
    }
    
    /*
    if (!found) {
        printf("Element not found\n");
    }*/
}

int main () {
    int search_item = 1;

    int low = 0;
    int high = (sizeof(arr)/sizeof(arr[0])) - 1;

    binary_search(low, high, search_item);

    return 0;
}
