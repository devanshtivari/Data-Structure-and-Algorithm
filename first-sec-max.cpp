#include<iostream>
#include<algorithm>
using namespace std;

/*
        ALGORITHM
  1. Input size and the array
  2. Sort the given array in ascending order
  3. Declare two pointer ptr1 and ptr2 and initialize it with -1 and it will store the number.
  4. Initialize ptr1 with the maximum number and ptr2 with second maximum number
*/

int main()
{
    cout<<"Enter size of array : ";
    int s;cin>>s;//entering size of array and declaring array
    int arr[s];
    cout<<"Enter elements of array-\n";
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    sort(arr , arr+s);
    int ptr1=-1;
    int ptr2=-1;
    ptr1=arr[s-1];//setting ptr1 to the maximum element
    while(s--){
        if(arr[s] != ptr1){
            ptr2 = arr[s];//setting ptr2 to the second maximum element
            break;
        }
    }
    cout<<ptr1<<" "<<ptr2;//printing the result
}
