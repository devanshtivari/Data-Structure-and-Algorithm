/* program to detect if the cycle is present and also making a cycle in a linear linked list. It is done using floyd rat and hare algorithm */

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

void makeLoop(node* &head, int pos)
{
    node* temp = head;
    node* desired = NULL;
    int c=1;
    while(temp->next != NULL){
        if(c == pos){
            desired = temp;
        }
        temp = temp->next;
        c++;
    }
    if(pos>c){
        cout<<"position out of bound"<<endl;
    }
    temp->next = desired;
}

bool checkCycle(node* &head)
{
    node* slow = head;
    node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        if(slow == fast)
            return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
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
    makeLoop(head, 3);
    if(checkCycle(head)){
        cout<<"cycle is present";
    }else{
        cout<<"cycle is not present";
    }
}
