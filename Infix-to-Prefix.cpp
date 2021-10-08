#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

/*
                 -ALGORITHM-
        1. Reversing the given string and changing the bracket ( to ) and vice versa
        2. If operand
                      Print
             If (
                      Push to the stack
             If )
                      Pop form the stack and add to the result until ( is found
             If operator
                      Pop from the stack and add to result until operator of lower precedence is found
        3. Reversing the string obtained by the InfixtoPrefix function
*/

string StringConverter(string s)  //reversing the string
{
    reverse(s.begin() ,s.end());
    string r;
    for(int i=0 ; i<s.length(); i++){
        if(s[i] == '('){
            s[i] = ')';
           }
        else if(s[i] == ')'){
            s[i]='(';
           }
    }
    return s;
}

int Precedence(char ch)  //finding preference of given character
{
    if(ch == '^'){return 3;}
    else if(ch == '*' or ch == '/'){return 2;}
    else if(ch == '+' or ch == '-'){return 1;}
    else {return -1;}
}

string InfixtoPrefix(string s)  //converting infix expression to prefix based on preference
{
    stack<char>st;
    string res;
    for(int i=0 ; i<s.length() ; i++){
        if((s[i] >= 'a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i] == '('){
                st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(!st.empty() and st.top() != '('){
                    res += st.top();
                    st.pop();
            }
            if(!st.empty()){  //if any bracket remains
                st.pop();
            }
        }
        else{
            while(!st.empty() and Precedence(st.top())>Precedence(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    cout<<"Enter string : ";
    string s;cin>>s;
    s = StringConverter(InfixtoPrefix(StringConverter(s)));  //reversing the prefix obtained by reversing the given string

    cout<<"Converted string from infix to prefix : "<<s;
}
