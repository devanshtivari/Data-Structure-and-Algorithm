#include<iostream>

using namespace std;

int main()
{
    int s;cin>>s;
    int arr[s];
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<s/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[s-i-1];
        arr[s-i-1] = temp;
    }
    for(int i=0 ; i<s ; i++){
        cout<<arr[i]<<" ";
    }
}
