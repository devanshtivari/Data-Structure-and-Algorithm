#include<iostream>
using namespace std;

int main()
{
    string s;cin>>s;
    int len = s.length();
    int flag=0;
    int i=0;int j=len-1;
    while(i <= j){
        if(s[i] != s[j]){
            flag++;
            break;
        }
        i++;j--;
    }
    if(flag == 1){
        cout<<"not";
    }
    else{
        cout<<"yes";
    }
}
