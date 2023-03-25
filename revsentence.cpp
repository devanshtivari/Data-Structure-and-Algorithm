#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i=0;
    string str = ""; 
    vector<string> res;
    for(int i=0 ; i<=s.length() ; i++){
        if(s[i] == ' ' || s[i] == '\0'){
            reverse(str.begin() , str.end());
            res.push_back(str);
            str = "";
        }
        str += s[i];
    }
    for(auto i:res){
        cout<<i<<" ";
    }
}
