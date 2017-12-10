#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Node Node;
struct Node {
    int val;
    Node    *left;
    Node    *right;
};

Node * create_node(int val) {
    Node *curr = (struct Node *) calloc(1, sizeof(struct Node));
    if (curr == NULL) {
        exit(1);
    }

    curr->val = val;
    curr->right = NULL;
    curr->left = NULL;

    return curr;
}

void insert (Node *root, int val) {
    Node *node;
    if (root == NULL) {
        node = create_node(val);
        root = node;
    } else {
        if (val < root->val) {
            if (root->left) {
                insert(root->left, val);
            } else {
                node = create_node(val);
                root->left = node;
            }
        } else {
            if (root->right) {
                insert(root->right, val);
            } else {
                node = create_node(val);
                root->right = node;
            }
        }
    }
}

void print_tree (Node *root) {
    if (root == NULL) {
        return;
    }

    print_tree(root->left);
    printf("%d ", root->val);
    print_tree(root->right);
}

int main () {
    Node *root = create_node(10);
    insert (root, 5);
    insert (root, 16);
    insert (root, 8);
    insert (root, 11);
    insert (root, 18);

    print_tree(root);
}
