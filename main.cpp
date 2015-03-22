Node* Delete(Node *head, int position)
/*We're given the pointer to the head node of a linked list
and the position of a node to delete. We delete the node at
 the given position and return the head node.*/
/*A position of 0 indicates head, a position of 1 indicates
one node away from the head and so on.*/
/*The list may become empty after you delete the node.*/
{
    Node *temp = head;
    if(position == 0)
        head = head->next;
    else
    {
        for(int i = 1; i < position; i++)
            temp = temp->next;
        Node *del = temp->next;
        temp->next = del->next;
    }
    return head;
}
