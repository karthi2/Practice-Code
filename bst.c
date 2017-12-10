#include <stdio.h>

typedef struct node *NODE;
struct node {
    NODE left;
    NODE right;
    int elem;
};

int arr[8] = {5, 9, 15, 21, 30, 36, 47, 50};

void binary_search_tree (int low, int high) {
    int mid = (low + high)/2;

    if (mid <= low) {
        /* Create a new node and assign to root->left */
        root->left = arr[mid];
        return;
    } else if (mid >= high) {
        /* Create a new node and assign to root->right */
        root->right = arr[mid];
        return;
    } else {
        root = arr[mid];
        binary_search_tree(low, mid - 1);
        binary_search_tree(mid + 1, high);
    }
}

int main () {
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;

    binary_search_tree(low, high);

}
