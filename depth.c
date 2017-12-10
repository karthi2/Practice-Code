/*
 * Routine to find the depth of a binary tree
 */

int find_depth (Node *root) {
    if (root == NULL) {
        return 0;
    }

    /*
     * initialized to 1 to account for the root node
     */
    int right_depth = 1;
    int left_depth = 1;

    right_depth = right_depth + find_depth(root->right);
    left_depth = left_depth + find_depth(root->left);

    return (right_depth > left_depth ? right_depth : left_depth);
}
