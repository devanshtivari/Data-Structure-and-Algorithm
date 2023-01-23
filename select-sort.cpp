//Move all the negative elements to one side of the array 
#include<iostream>
using namespace std;

/*
            ALGORITHM
    1. Input the size and the element of the array
    2. Declare a function to insert elements at the last of a linked list
    3. Classify the elements as positive and negative and placing in respective ll
    4. Traversing the linked list and storing in result array
    5. Returning the result array
*/

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

void InsertatLast(node* &head , int val)
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

void FindandSort(int arr[] , int s)
{
    node* positive = NULL;
    node* negative = NULL;
    int result[s];
    for(int i=0 ; i<s ; i++){
        if(arr[i] >= 0){
            InsertatLast(positive,arr[i]);
        }
        else{
            InsertatLast(negative,arr[i]);
        }
    }
    int j=0;
    node* temp = negative;
    while(temp != NULL){
        result[j] = temp->data;
        temp = temp->next;
        j++;
    }
    temp = positive;
    while(temp != NULL){
        result[j] = temp->data;
        temp = temp->next;
        j++;
    }
    //we can return the result array from the function
    for(int i=0 ; i<s ; i++){
        cout<<result[i]<<" ";
    }
}

int main()
{
    int s;cin>>s;
    int arr[s];
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    FindandSort(arr,s);

}
