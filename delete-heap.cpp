//this code deletes the root of a heap

#include<iostream>
#include<vector>
using namespace std;

void deleteFromHeap(int arr[] , int &n)
{
    arr[1] = arr[n];
    n--;

    int i=1;
    while(i<n){
        int left = 2*i;
        int right = 2*i+1;

        if(left < n && arr[i]<arr[left]){
            int temp = arr[i];
            arr[i] = arr[left];
            arr[left] = temp;

            i=left;
        }else if(right < n && arr[i] < arr[right]){
            int temp = arr[i];
            arr[i] = arr[right];
            arr[right] = temp;

            i = right;
        }else{
            return;
        }
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

    deleteFromHeap(arr , n);
    cout<<"Arranged heap-\n";
    for(int i=1 ; i<=n+1 ; i++){
        cout<<arr[i]<<" ";
    }
}
