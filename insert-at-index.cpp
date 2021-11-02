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
void InsertatIndex(node* &head , int data , int position)
{
    node* dev = new node(data);
    int pos=1;
    node* temp = head;node* temp1;
    while(pos != position)
    {
        pos++;
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next=dev;
    dev->next = temp;
}
int main(){
  /*
     enter code here
  */
}
