#include<iostream>
#include<vector>
using namespace std;

/*
        ALGORITHM

                    {1,2,3}
                    ex/  \in           i=0
             {1,2,3}{}   {1,2,3}{1}
           ex/     \in    ex/     \in  i=1
    {1,2,3}{} {1,2,3}{2}   /     {1,2,3}{1,2}   i=2
                  {1,2,3}{1}
      
at end when i=3, we will get the power set of the values refer to lec 37
*/

void power_set(vector<int> input, int index, vector<int> output, vector<vector<int>> &ans)
{
    //base condition
    if(index>=input.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    power_set(input, index+1, output, ans);

    //include
    output.push_back(input[index]);
    power_set(input, index+1, output, ans);

}

int main()
{
    int s;cin>>s;
    vector<int> input;
    for(int i=0 ; i<s ; i++){
        int ele=0;cin>>ele;
        input.push_back(ele);
    }
    vector<vector<int>> ans;
    vector<int> output;
    power_set(input, 0, output, ans);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<"{ ";
        for(int j=0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"}";
        cout<<" , ";
    }
}

