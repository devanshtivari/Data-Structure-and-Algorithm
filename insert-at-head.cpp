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
void InsertatHead(node* &head , int val)
{
    node* dev = new node(val);
    node*p;
    p = head;
    dev->next = p;
    head = dev;
}
int main(){
  /*
    enter code here
  */
}
