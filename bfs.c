/*
 * Routine to do a bfs on a binary tree whose nodes are always filled from left
 * to right and print them in row order on separate lines
 */

void bfs (Node *root) {
    if (root == NULL) {
        return;
    }

    int level = 1;
    queue.add(root);
    queue.add(NULL);

    while (!queue.isEmpty()) {
        queue.remove(root);

        if (root) {
            if (root->left) {
                queue.add(root->left);
            }

            if (root->right) {
                queue.add(root->right, level);
            }
        } else {
            queue.add(NULL);
        }
    }
}
