/*
 * Routine to merge 2 sorted singly linked list
 */

void mergelist (Node *a, Node *b) {
    if (a == NULL) {
        return b;
    }

    if (b == NULL) {
        return a;
    }

    Node *preva = NULL;
    Node *prevb = NULL;
    Node *curra = a;
    Node *currb = b;

    while (curra != NULL || currb != NULL) {
        if (curra->data <= currb->data) {
            preva = curra;
            curra = curra->next;
        } else {
            preva->next = currb;
            prevb = currb;
            currb = currb->next;
            prevb->next = curra;

            preva = preva->next;
        }
    }

    /*
     * At this point we know that either of curra or currb is NULL
     */
    if (curra == NULL) {
        /*
         * Attach the rest of the list b to lista
         */
        preva->next = currb;
    }
    //Nothing needs to be done if list b is empty. It means all nodes from list
    //b are inserted in list a.

    return;
}
