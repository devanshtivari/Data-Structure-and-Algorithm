/* code to reverse a linked list */
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertatEnd(node* &head, int val)
{
    node* dev = new node(val);
    if(head == NULL){
        head = dev;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = dev;
}

void Display(node* head)
{
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node* reverseLL(node* &head)
{
    node* prev = NULL;
    node* curr = head;
    node* after = NULL;
    while(curr != NULL){
        after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
    }
    return prev;
}

int main()
{
    node* head = NULL;
    InsertatEnd(head, 10);
    InsertatEnd(head, 20);
    InsertatEnd(head, 30);
    InsertatEnd(head, 40);
    InsertatEnd(head, 50);
    Display(head);
    node* revhead = reverseLL(head);
    Display(revhead);
}
