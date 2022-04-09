#include<bits/stdc++.h>
using namespace std;

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

void InsertatHead(node* &head , int val)
{
    node* dev = new node(val);
    if(head == NULL){
        head = dev;
        return;
    }
    dev->next = head;
    head = dev;
}

void Display(node* head)
{
    node* temp = head;
    cout<<"Elements of the list are-\n";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int middleoflist(node* head)
{
    node* slow = head;
    node* fast = head;
    int i=0;
    while(fast->next != NULL){
        if(i==0){
            fast = fast->next;
            i=1;
        }
        else if(i==1){
            fast = fast->next;
            slow = slow->next;
            i=0;
        }
    }
    return slow->data;
}

int main()
{
    node* head = NULL;
    InsertatHead(head, 1);
    InsertatHead(head, 2);
    InsertatHead(head, 3);
    InsertatHead(head, 4);
    InsertatHead(head, 5);
    InsertatHead(head, 6);
    Display(head);
    cout<<"element at the middle is "<<middleoflist(head);
}
