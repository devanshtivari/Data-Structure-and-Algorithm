//this code will insert a new node in the heap [brute-force approach]

#include<iostream>
#include<vector>
using namespace std;

void arrangeInHeap(int arr[] , int n , int node)
{
    arr[n+1] = node;
    int i = n+1;
    while(i != 1){
        if(arr[i/2] > arr[i])
            break;

        int temp = arr[i/2];
        arr[i/2] = arr[i];
        arr[i] = temp;

        i = i/2;
    }
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter size: ";
    cin>>n;
    arr[0] = NULL;
    cout<<"Enter elements: ";
    for(int i=1 ; i<=n ; i++){
        cin>>arr[i];
    }
    int node;
    cout<<"Enter node: ";
    cin>>node;

    arrangeInHeap(arr , n , node);
    cout<<"Arranged heap-\n";
    for(int i=1 ; i<=n+1 ; i++){
        cout<<arr[i]<<" ";
    }
}
