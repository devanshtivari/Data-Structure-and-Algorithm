#include<iostream>
using namespace std;

/*  
       ALGORITHM
  1. Enter the size and elements of array
  2. Declare three iterators to iterate over array to find peak elements
  3. Iterate over array and satisfy the peak element condition
*/

int main()
{
    cout<<"Enter size of array : ";
    int s;cin>>s;
    int arr[s+2];
    arr[0]=0;
    arr[s+1]=0;
    cout<<"Enter elements of array-\n";
    for(int i=1 ; i<=s ; i++){
        cin>>arr[i];
    }
    cout<<"Peak element/elements-\n";
    int ptr1=0,ptr2=0,ptr3=0;//pointers for iteration
    for(int i=0 ; i<s ; i++){
        ptr1=i;ptr2=i+1;ptr3=i+2;
        if(arr[ptr1]<arr[ptr2] && arr[ptr2]>arr[ptr3]){//peak elements condition
            cout<<arr[ptr2]<<" ";
        }
    }
}
