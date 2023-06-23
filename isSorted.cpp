//issorted using recursion
#include<iostream>
using namespace std;

bool isSorted(int *arr, int s)
{
    if(s==0 || s==1)
        return true;
    else if(arr[0]>arr[1])
        return false;
    else{
        bool ans = isSorted(arr+1,s-1);
        return ans;
    }
}

int main()
{
    int s;cin>>s;
    int arr[s];
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    if(isSorted(arr,s))
        cout<<"Array is sorted";
    else
        cout<<"Array is not sorted";
}
