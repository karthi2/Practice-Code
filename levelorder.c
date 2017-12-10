#include <stdio.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

void levelOrder (struct node *root) {
    int count = 0;
    struct node *queue[100] = {};
    struct node *cur = root;

    queue[count++] = cur;

    for (int i = 0; i < count; i++) {
        printf("%d ", queue[i]->data);

        if (queue[i]->left) {
            queue[count++] = queue[i]->left;
        }

        if (queue[i]->right) {
            queue[count++] = queue[i]->right;
        }
    }
}

int main () {
    struct node root = {10, NULL, NULL};
    struct node left = {20, NULL, NULL};
    struct node right = {30, NULL, NULL};

    root.left = &left;
    root.right = &right;
    levelOrder(&root);
}
