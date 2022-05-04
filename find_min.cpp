#include<iostream>
#include<stack>
using namespace std;

/*
       ALGORITHM
 1. Enter the elements in the stack.
 2. If top of stack is smaller than min, initialize min with the top.
 3. Pop the top from the stack.
*/

int main()
{
    cout<<"Enter size of stack : ";
    int s;cin>>s;
    stack<int> st;
    cout<<"Enter elements-\n";
    for(int i=0 ; i<s ; i++){
        int k;cin>>k;
        st.push(k);
    }
    int Min = INT_MAX;
    while(!st.empty()){
        if(st.top() < Min)
            Min = st.top();
        st.pop();
    }
    cout<<"Minimum element is : "<<Min;
}
