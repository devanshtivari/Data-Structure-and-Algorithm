#include<iostream>
#include<stack>
using namespace std;

bool topchecker(char ch , char top)
{
    if(ch == '(' and top == ')')
        return true;
    if(ch == '{' and top == '}')
        return true;
    if(ch == '[' and top == ']')
        return true;
    else
        return false;
}

int main()
{
    stack<char> st;
    string input;
    cout<<"Enter the string : ";
    cin>>input;
    for(int i=0 ; i<input.size() ; i++){
        if(input[i] == '(' or input[i] == '{' or input[i] == '['){
            st.push(input[i]);
        }
        if(input[i] == ')' or input[i] == '}' or input[i] == ']'){
            if (topchecker(st.top() , input[i])){
                st.pop();
            }
            else{
                err = 1;
                break;
            }
        }
    }
    if (st.empty()){
        cout<<"String is balanced ";
    }
    else{
        cout<<"String is not balanced";
    }


}
