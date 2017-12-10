/*
 * Routine to check if the two trees are mirror of each other
 */

bool isMirror (Node *root1, Node *root2) {
    if (root1 == NULL || root2 == NULL) {
        return false;
    }

    if (root1->data == root2->data) {
        if (isMirror(root1->right, root2->left)) {
            return isMirror (root1->left, root2->right);
        }
        return false;
    } else {
        return false;
    }
}
