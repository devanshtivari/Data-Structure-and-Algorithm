#include<iostream>
#include<stack>
using namespace std;

/*        ALGORITHM
    1. If str[i] is an opening parenthesis or operator or operand then push it in stack
    2. If str[i] is an closing parenthesis then
                If the top of stack is an opening parenthesis
                            then redundant parenthesis are present
                Else
                              pop until we get opening parenthesis.
*/

bool RedundancyCheck(string str)
{
    stack<char> st;
    for(int i=0 ; i<str.size() ; i++){
        if(str[i] == '(')
            st.push(str[i]);
        else if((str[i]>='a' and str[i]<='z') or (str[i]>='A' and str[i]<='Z') or (str[i]=='+' or str[i]=='-' or str[i]=='*' or str[i]=='/'))
            st.push(str[i]);
        else if(str[i]==')'){
            if(st.top() == '(')
                return true;
            else{
                int flag=0;    //if the expression only contain operand and not operator then also it is redundant
                while(st.top() != '('){
                        if(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/'){
                            flag++;
                      }
                        st.pop();
                }
                st.pop(); //popping out leftover opening parenthesis
                if(flag == 0)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    cout<<"Enter string to be checked : ";
    string str;cin>>str;
    if(RedundancyCheck(str))
        cout<<"String contain redundant parenthesis\n";
    else
        cout<<"String does not contain redundant parenthesis\n";
}
