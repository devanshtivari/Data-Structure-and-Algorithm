#include<iostream>
#include<iterator>
#include<map>
using namespace std;

/*
      ALGORITHM
  1. Enter size and declare a map and enter values
  2. Enter value of x and y
  3. Iterate over the map and do comparisons and find minimum positive path length
  4. If element found print the answer and if element not found print -1
*/

int main()
{
    cout<<"Enter size of array : ";
    int s;cin>>s;
    map<int,int> arr;
    cout<<"Enter elements-\n";
    for(int i=0 ; i<s ; i++){
        int k=0;
        cin>>k;
        arr.insert(pair<int,int>(i,k));
    }
    cout<<"Enter value of x and y : ";
    int x,y;cin>>x>>y;
    map<int,int>::iterator itr;
    int flag=0;//counter to check x and y exist
    int ptr1=0,ptr2=0;
    int ans;//minimum path length
    for(itr=arr.begin() ; itr!=arr.end(); ++itr){
        if(itr->second == x){
            ptr1 = itr->first;//to find x
            flag++;
        }
        if(itr->second == y){
            ptr2 = itr->first;//to find y
            flag++;
        }
        int c = ptr2-ptr1;//difference of both pointers
        if(c>=1){ //check if c is positive
           if(ans>c){//finding the minimum element
            ans=c;
           }
        }
    }
    if(flag >= 2)
        cout<<ans;
    else
        cout<<"-1";//if element not found
}

