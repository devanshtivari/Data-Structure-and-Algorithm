#include<iostream>
using namespace std;

class node//creating list
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
void InsertatTail(node* &head , int val)
{
    node* dev = new node(val);
    node* temp=head;
    if(head == NULL)
    {
        head = dev;
        return;
    }
    while(temp->next != NULL)
    {
        temp  =temp->next;
    }
    temp->next = dev;
}
int main(){
  /*
   enter code here
  */
}
