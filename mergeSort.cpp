#include<iostream>
using namespace std;

void Merge(int *arr, int l, int r)
{
    int mid = (l+r)/2;
    int len1 = mid+1-l;
    int len2 = r-mid;

    //declaring the two arrays
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    //copying the value from the main array into the array
    int mainArrayindex = l;
    for(int i=0 ; i<len1 ; i++){
        arr1[i] = arr[mainArrayindex++];
    }
    mainArrayindex = mid+1;
    for(int i=0 ; i<len2 ; i++){
        arr2[i] = arr[mainArrayindex++];
    }

    //reinitializing the main array index to 0
    mainArrayindex = l;
    int i=0;int j=0;

    //comparing the two arrays
    while(len1 > i && len2 > j){
        if(arr1[i]<arr2[j]){
            arr[mainArrayindex++] = arr1[i++];
        }
        else{
            arr[mainArrayindex++] = arr2[j++];
        }
    }
    while(len1 > i){
        arr[mainArrayindex++] = arr1[i++];
    }
    while(len2 > j){
        arr[mainArrayindex++] = arr2[j++];
    }

}

void MergeSort(int *arr,int l,int r)
{
    if(l>=r)
        return;
    //breaking the array into two parts
    int mid = (l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);

    //merging the broken arrays
    Merge(arr,l,r);
}

int main()
{
    int s;cin>>s;
    int arr[s];
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,s-1);
    for(int i=0 ; i<s ; i++){
        cout<<arr[i]<<" ";
    }

}
