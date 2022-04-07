#include<iostream>
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

void Insertathead(node* &head , int val)
{
    node* dev = new node(val);
    if (head == NULL){
        head = dev;
        return;
    }
    dev->next = head;
    head = dev;
    return;
}

void Display(node* head)
{
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}

void Deleteathead(node* &head)
{
    node* temp = head;
    head = head->next;
    delete(temp);
    return;
}

int main()
{
    node* head = NULL;
    Insertathead(head , 1);
    Insertathead(head , 2);
    Insertathead(head , 3);
    Insertathead(head , 4);
    Insertathead(head , 5);
    Insertathead(head , 6);
    Insertathead(head , 7);
    //7->6->5->4->3->2->1
    Display(head);
    Deleteathead(head);
    Display(head);
}
