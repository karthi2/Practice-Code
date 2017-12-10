/*
 * Find the 2nd max element in a binary search tree
 */

void inorder (Node *root, int *highest, int *second_highest) {
    if (root == NULL) {
        return;
    }

    inorder(root->left, highest, second_highest);
    second_highest = highest;
    highest = root;
    inorder(root->right, highest, second_highest);
}
