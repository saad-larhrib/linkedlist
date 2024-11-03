node *before(node *head, int ndata, int val) {
    // Create the new node to insert
    node *befnode = (node *)malloc(sizeof(node));
    befnode->data = ndata;
    befnode->next = NULL;

    // Check if the list is empty
    if (head == NULL) {
        return head;  // Can't insert before anything if the list is empty
    }

    // Special case: if the head node contains the value 'val'
    if (head->data == val) {
        // Insert the new node before the head
        befnode->next = head;
        return befnode;  // New node is now the head
    }

    // Traverse the list to find the node before the node with value 'val'
    node *tmp1 = head;
    node *tmp2 = NULL;

    while (tmp1 != NULL && tmp1->data != val) {
        tmp2 = tmp1;      // Update tmp2 to the current node
        tmp1 = tmp1->next;  // Move to the next node
    }

    // If we found the node with 'val'
    if (tmp1 != NULL) {
        befnode->next = tmp1;  // Point the new node to tmp1
        tmp2->next = befnode;  // Link the previous node (tmp2) to the new node
    }

    return head;
}
