#include<iostream>
using namespace std;

void SortArray(int *arr, int n)
{
    if(n==0 || n==1)
        return;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    SortArray(arr,n-1);
}

int main()
{
    int s;cin>>s;
    int arr[s];
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    SortArray(arr,s);
    for(int i=0 ; i<s ;i++)
        cout<<arr[i]<<" ";
}
