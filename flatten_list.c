/*
 * Routine to flatten a sorted list where each node has a list of its own.
 */

struct node {
    struct node *right;
    struct node *down;
    int data;
};

typedef struct node Node;

void flatten_list (Node *node) {
    if (node == NULL) {
        return;
    }

    Node *rnext = node->right;
    Node *rprev = node;
    while (rnext != NULL) {
        /*
         * Find the correct position in the "right" list to insert the
         * "down" nodes
         */
        Node *dnext = node->down;
        Node *dprev = node;
        while (dnext != NULL) {
            tnext = rnext;
            tprev = rprev;
            while (rnext != NULL) {
                if (dnext->data < rnext->data) {
                    Node *temp = tnext;
                    tprev->right = dnext;
                    dnext->right = temp;

                    dprev->down = dnext->down;
                    dnext->down = NULL;
                    break;
                } else {
                    tprev = tnext;
                    tnext = tnext->right;
                }

                /*
                 * Insert at the end of the list
                 */
                tprev->right = dnext;
                dprev->down = dnext->down;
                dnext->right = NULL;
                dnext->down = NULL;
            }

            dprev = dnext;
            dnext = dnext->down;
        }
    }
    rprev = rnext;
    rnext = rnext->right;
}
