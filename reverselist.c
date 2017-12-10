/*
 * Routine to reverse a singly linked list with O(1) memory
 */

struct node * reverselist (struct node *head) {
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next = NULL;

    if (head == NULL) {
        return head;
    }

    do {
        /*
         * Maintain a pointer to the next element
         */
        next = curr->next;

        /*
         * Make the curr pointer point to the prev element
         */
        curr->next = prev;

        /*
         * Update the prev pointer to curr
         */
        prev = curr;

        /*
         * Save the current head of the list
         */
        head = curr;

        /*
         * Move to the next pointer saved in step 1 and repeat
         */
        curr = next;
    } while (next != NULL);

    /*
     * Return head pointer
     */
    return head;
}
