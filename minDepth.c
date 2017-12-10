/*
 * Routine to print the min depth of a tree
 */

static int minDepth = INT_MAX;

int findDepth (Node *root) {
    if (root == NULL) {
        return 0;
    }

    if (root->left == NULL && root->right == NULL) {
        return 1;
    }

    currDepth = 1 + findDepth(root->left);
    if (minDepth > currDepth) {
        minDepth = currDepth;
    }

    /*
     * Find the depth of the right subtree at each level
     */
    currDepth = 1 + findDepth(root->right);
    if (minDepth > currDepth) {
        minDepth = currDepth;
    }

    return currDepth;
}
