/*
      ALGORITHM
  1. Declare two pointers ptr1 and ptr 2.
  2. If data of both the pointers are not equal, then traverse both the pointer one step ahead.
  3 If they are not equal:
            then update ptr 2 and update ptr1->next with ptr2
*/

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* ptr1 = llist;
    SinglyLinkedListNode* ptr2 = llist->next;
    SinglyLinkedListNode* head = llist;
    while (ptr2 != NULL) {
        if(ptr1->data != ptr2->data){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else{
            ptr2 = ptr2->next;
            ptr1->next = ptr2;
        }
    }
    return head;
}

//hackerrank solution
