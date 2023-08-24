/* program to reverse K node in a linked list. 
10 20 30 40 50 60 70 80 90
20 10 40 30 60 50 80 70 90 when k=2 */


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

node* reverseKnode(node* &head, int k)
{
    if(head == NULL)
        return NULL;

    int c = 0;
    node* prev = NULL;
    node* curr = head;
    node* after = NULL;
    while(curr != NULL && c<k){
        after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
        c++;
    }

    if(after != NULL){
        head->next = reverseKnode(after,k);
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
    InsertatEnd(head, 60);
    InsertatEnd(head, 70);
    InsertatEnd(head, 80);
    InsertatEnd(head, 90);
    Display(head);
    node* reverseK = reverseKnode(head,2);
    Display(reverseK);
}

