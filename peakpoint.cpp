#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int len;cin>>len;
    int arr[len];
    vector<int> ans;
    for(int i=0 ; i<len ; i++){
        cin>>arr[i];
    }
    int ptr1=0;int ptr2=0;int ptr3=0;
    for(int i=0; i<len ; i++){
        if(i == 0){
            if(arr[i] > arr[i+1]){
                ans.push_back(arr[i]);
            }
        }
        else if(i == len-1){
            if(arr[i] > arr[i-1]){
                ans.push_back(arr[i]);
            }
        }
        else{
            ptr1 = i-1;
            ptr2 = i;
            ptr3 = i+1;
            if(arr[ptr1]<arr[ptr2] && arr[ptr2]>arr[ptr3]){
                ans.push_back(arr[ptr2]);
            }
        }
    }
    for(auto i: ans){
        cout<<i<<" ";
    }
}
