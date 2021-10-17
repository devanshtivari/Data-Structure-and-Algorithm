#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void CreateCircularLL(node* &head ,int n)
{
    node* temp = head;
    for(int i=2 ; i<=n ; i++){
        node* dev = new node(i);
        temp->next = dev;
        temp = dev;
    }
    temp->next = head;
}

int JosephusProblem(node* &head ,int k)
{
    node* ptrPrev=head; node* ptrNext = head;
    while(ptrPrev->next != ptrNext){
        int c=0;
        cout<<ptrNext->data<<endl;
        while(c != k){
            ptrPrev = ptrNext;
            ptrNext = ptrNext->next;
            c++;
        }
        cout<<ptrPrev->data<<endl;
        ptrPrev->next = ptrNext->next;
        ptrNext=ptrPrev->next;
    }
    return ptrPrev->data;
}

int main()
{
    cout<<"Enter value of n : ";
    int n;cin>>n;
    node* head = new node(1);
    CreateCircularLL(head ,n);
    cout<<"Enter value of k : ";
    int k;cin>>k;
    cout<<"Last number found after elimination is : "<<JosephusProblem(head ,k);
}
