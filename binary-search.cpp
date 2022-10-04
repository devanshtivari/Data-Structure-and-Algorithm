#include<iostream>
using namespace std;

int Binary_Search(int arr[] , int l , int r , int key)
{
    if(l==r && arr[l]!=key){
        return -1;
    }
    int mid = (l+r)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        Binary_Search(arr , l , mid-1 , key);
    }
    else if(arr[mid]<key){
        Binary_Search(arr , mid+1 , r , key);
    }
    else{
        return -1;
    }
}

int main()
{
    cout<<"Enter the size of array : ";
    int s;cin>>s;
    int arr[s];
    cout<<"Enter elements of array in sorted order =\n";
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be searched : ";
    int key;cin>>key;

    cout<<"Element found at index : "<<Binary_Search(arr , 0 , s-1 , key);
}
