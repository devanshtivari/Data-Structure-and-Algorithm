//calculates the first and last occurance of integer in sorted array. Use of binary sort
#include<iostream>
using namespace std;

int first_Occurence(int arr[] , int l , int r , int key)
{
    int mid = l + (r-l)/2;
    int index = -1;
    while(l<=r){
        if(arr[mid] == key){
            index = mid;
            r = mid-1;
        }
        else if(key > arr[mid]){
            l = mid+1;
        }
        else if(key < arr[mid]){
            r = mid-1;
        }
        mid = l + (r-l)/2;
    }
    return index;
}

int Last_Occurence(int arr[] , int l , int r , int key)
{
    int mid = l+(r-l)/2;
    int index = -1;
    while(l<=r){
        if(arr[mid] == key){
            index = mid;
            l = mid+1;
        }
        else if(key > arr[mid]){
            l = mid+1;
        }
        else if(key < arr[mid]){
            r = mid-1;
        }
        mid = l+(r-1)/2;
    }
    return index;
}

pair<int,int> Occurance(int arr[] , int l , int r , int key)
{
    pair<int,int> p1;
    p1.first = first_Occurence(arr , l , r, key);
    p1.second = Last_Occurence(arr , l , r , key);
    return p1;
}

int main()
{
    int s;cin>>s;
    int arr[s];
    int key;cin>>key;
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    pair<int,int> p1 = Occurance(arr , 0 , s-1 , key);
    cout<<"The first and last occurance is : "<<p1.first<<" "<<p1.second;
}
