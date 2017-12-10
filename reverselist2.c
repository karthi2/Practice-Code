struct node {
    int val;
    struct node *next;
};

typedef struct node *Node;

Node reverse_n (Node node, int n) {
    int count = 0;
    Node prev = NULL;
    Node curr = NULL;
    Node temp = NULL;
    Node last = node;

    curr = node;
    temp = node;

    while (temp != NULL || count != n) {
        count++;
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return last;
}


Node reverse_list(Node node, int n) {
    if (node == NULL) {
        return node;
    }

    while (node->next != NULL) {
        node = reverse_n(node, n);
    }
}
