#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node * bst (int a[], int low, int high) {
    Node *root = malloc(sizeof(struct node));

    if (low > high) {
        return NULL;
    }

    int mid = (low + (high - low)/2);

    root->data = a[mid];
    root->left = bst(a, low, mid - 1);
    root->right = bst(a, mid+1, high);
    return root;
}


int main () {
    int a[] = {1, 2, 3, 4, 5};
    int low = 0;
    int high = sizeof(a)/sizeof(int) - 1;

    bst(a, low, high);
}
