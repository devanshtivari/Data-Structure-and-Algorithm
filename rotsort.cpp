#include<iostream>
using namespace std;

int main()
{
    int s;cin>>s;
    int arr[s];
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    int c=0;
    //1,2,3,4,5
    //3,4,5,1,2
    for(int i=1 ; i<s ; i++){
        if(arr[i-1]>arr[i]){
            c++;
        }
    }
    if(arr[s-1]>arr[0]){
        c++;
    }

    if(c <= 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
