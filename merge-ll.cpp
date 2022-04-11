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

node* Mergetwolist(node* &head1 , node* &head2)
{
    node* merged_head = NULL;
    if (head1==NULL){
        return(head2);
    }
    else if(head2==NULL){
        return(head1);
    }

    if(head1->data <= head2->data){
        merged_head = head1;
        merged_head->next = Mergetwolist(head1->next , head2);
    }
    else{
        merged_head = head2;
        merged_head->next = Mergetwolist(head1 , head2->next);
    }
    return(merged_head);

}

int main()
{
    node* head1 = NULL;
    node* head2 = NULL;
    InsertatHead(head1 , 9);
    InsertatHead(head1 , 7);
    InsertatHead(head1 , 5);
    InsertatHead(head1 , 3);
    InsertatHead(head1 , 1);
    Display(head1);
    InsertatHead(head2 , 10);
    InsertatHead(head2 , 8);
    InsertatHead(head2 , 6);
    InsertatHead(head2 , 4);
    InsertatHead(head2 , 2);
    Display(head2);
    cout<<"After merging ";
    Display(Mergetwolist(head1 , head2));
}
