#include<iostream>
#include<vector>
using namespace std;

/* algorithm will be same as that of power set. Refer to lec 37*/

void subSequence(string s, int index, vector<char> output, vector<vector<char>> &ans)
{
    //base condition
    if(index >= s.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    subSequence(s,index+1,output,ans);
    //include
    output.push_back(s[index]);
    subSequence(s,index+1,output,ans);
}

int main()
{
    string s;cin>>s;
    vector<vector<char>> ans;
    vector<char> output;
    subSequence(s,0,output,ans);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<"{ ";
        for(int j=0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"} , ";
    }
}
