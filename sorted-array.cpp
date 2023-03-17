#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int s;cin>>s;
    int arr[s];
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    int a=0,b=1,flag=0;
    for(int i=0 ; i<s ; i++){
        if(a == s-1){
            break;
        }
        else if(arr[a]>arr[b]){
            flag=1;
            break;
        }
        else{
            a++;b++;
        }
    }
    if(flag){
        cout<<"Not in sorted order";
    }
    else{
        cout<<"Array in sorted order";
    }

}
