#include<iostream>
#include<stack>
using namespace std;

/*     ALGORITHM
  1. If operand
             Print
   2. If (
             Push to stack
    3. If )
             Pop from stack and print until ( follows
    4. If operator
              Pop from stack and print until an operator of lower precedence is found
*/

int Precedence(char str)  //function to evaluate preference
{
    if(str == '^'){
        return 3;
    }
    else if(str == '*' or str == '/'){
        return 2;
    }
    else if(str == '+' or str =='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string InfixtoPostfix(string s)
{
        stack<char> st;
        string res;

        for(int i=0 ; i<s.size() ; i++){
            if((s[i] >='a' && s[i]<='z' ) || (s[i]>='A' && s[i]<='Z')){
                res+=s[i];
            }
            else if(s[i] == '('){
                st.push(s[i]);
            }
            else if( s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                        res+=st.top();
                        st.pop();
                }
                if(!st.empty()){  //popping out any remaining open braces from the stack
                    st.pop();
                }
            }
            else{
                while(!st.empty() && Precedence(s[i])<Precedence(st.top())){
                    res+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
}

int main()
{
    cout<<"Enter String to be converted : ";
    string s;cin>>s;
    cout<<"Converted infix to postfix expression : "<<InfixtoPostfix(s);
}
