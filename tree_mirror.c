/*
 * Routine to covert a binary tree into its mirror
 */

void tree_mirror (Node *root) {
    if (root == NULL) {
        return;
    }

    /*
     * Swap the left and right subtrees
     */
    Node *temp = root->right;
    root->right = root->left;
    root->left = temp;

    /*
     * Repeat the process for right and left subtrees recursively
     */
    tree_mirror(root->left);
    tree_mirror(root->right);
}
