#include<iostream>
using namespace std;

void Merge(int arr[] ,int l, int mid, int r)
{
    int s1 = mid-l+1;
    int s2 = r-mid;
     int arr1[s1];int arr2[s2];
     for(int i=0 ; i<s1 ; i++){
        arr1[i] = arr[i+l];
     }
     for(int i=0 ; i<s2 ; i++){
        arr2[i] = arr[mid+1+i];
     }
     int i=0;int j=0;int k=l;
     while(i<s1 && j<s2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;i++;
        }
        else{
            arr[k] = arr2[j];
            k++;j++;
        }
     }
     while(i<s1){
        arr[k]=arr1[i];
        k++;i++;
     }
     while(j<s2){
        arr[k]=arr2[j];
        k++;j++;
     }
}

void MergeSort(int arr[] ,int l ,int r)
{
    if(l<r){
        int mid = (l+r)/2;
        MergeSort(arr ,l ,mid);
        MergeSort(arr ,mid+1, r);
        Merge(arr,l,mid,r);
    }

}
int main()
{
    cout<<"Enter dimension of array : ";
    int s;cin>>s;
    int arr[s];
    cout<<"Enter elements of array-\n";
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<s ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MergeSort(arr, 0, s-1);
     for(int i=0 ; i<s ; i++){
        cout<<arr[i]<<" ";
    }
}
