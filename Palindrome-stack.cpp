#include <iostream>
#include<stack>
using namespace std;

bool isPalindrome(string s)
{
    int length = s.size();
    stack<char> st;
    int i, mid = length / 2;

    for (i = 0; i < mid; i++) {
        st.push(s[i]);
    }
    if (length % 2 != 0) {
        i++;
    }

    char ele;
    while (s[i] != '\0')
    {
         ele = st.top();
         st.pop();
    if (ele != s[i])
        return false;
        i++;
    }

return true;
}

int main()
{
    cout<<"Enter string to be checked : ";
    string s;cin>>s;
    if(isPalindrome(s)){
        cout<<"Entered string is palindrome\n";
    }
    else{
        cout<<"Entered string is not palindrome\n";
    }

    return 0;
}
