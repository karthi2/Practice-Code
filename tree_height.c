/*
 * Routine to find the height of a tree
 */

int find_height(Node *node) {
    if (node == NULL) {
        return 0;
    }

    return (max(find_height(node->left), find_height(node->right))) + 1;
}

int main () {
    Node    *root;

    construct_tree(root);

    int height = max(find_height(node->left), find_height(node->right)) + 1;
    printf("%d\n", height);
    return 0;
}
