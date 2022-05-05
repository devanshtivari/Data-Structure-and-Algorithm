/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* head = llist;
    SinglyLinkedListNode *prev = llist;
    SinglyLinkedListNode* curr = llist->next;
    SinglyLinkedListNode* n = llist->next->next;
    if(position == 0){
        head = head->next;
        return head;
    }
    int pos = 1;
    while(pos != position){
        pos++;
        prev = prev->next;
        curr = curr->next;
        n = n->next;      
    }
    prev->next = n;
    delete(curr);
    return head;
}

//this is the solution of hackerrrank problem
