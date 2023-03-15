#include <iostream>
using namespace std;

int main()
{
    int s;cin>>s;
    int si = s;
    int arr[s];
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    while(s!=0){
        for(int i=0 ; i<s ; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        s--;
    }
    for(int i=1 ; i<=si ; i++){
        cout<<arr[i]<<" ";
    }
}
