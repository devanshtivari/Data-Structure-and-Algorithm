#include<iostream>
using namespace std;

/*

       ALGORITHM
  1. Create threee pointers for prev curr and next node
  2. Point curr to the prev and update the pointers.

*/

class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void Insert(node* & head , int val)
{
    node* dev = new node(val);
    node*p;
    p = head;
    dev->next = p;
    head = dev;
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

node* Reverse(node* head)
{
    node* curr = head;
    node* prev = NULL;
    node* nex = NULL;
    while(curr != NULL){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
}

int main()
{
    node* head = NULL;
    Insert(head , 1);
    Insert(head , 2);
    Insert(head , 3);
    Insert(head , 4);
    Insert(head , 5);
    Insert(head , 6);
    Insert(head , 7);
    Display(head);
    cout<<"Reverse of the list is : ";
    Display(Reverse(head));
}
