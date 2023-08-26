/* this code will remove duplicate elements from the linked list */


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

node* removeDuplicate(node* &head)
{
    node* curr = head;
    node* ahead = head->next;
    while(ahead != NULL){
        if(curr->data == ahead->data){
           curr->next = ahead->next;
           node* temp = ahead;
            ahead = ahead->next;
            delete(temp);
        }else{
            curr = curr->next;
            ahead = ahead->next;
        }
    }
    return head;
}


int main()
{
    node* head = NULL;
    InsertatEnd(head, 1);
    InsertatEnd(head,2);
    InsertatEnd(head, 3);
    InsertatEnd(head, 3);
    InsertatEnd(head, 4);
    InsertatEnd(head, 4);
    InsertatEnd(head, 4);
    InsertatEnd(head, 4);
    Display(head);
    node* singlelist = removeDuplicate(head);
    Display(singlelist);
}
