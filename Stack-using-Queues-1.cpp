#include<iostream>
#include<queue>
using namespace std;

/*
           -ALGORITHM-
    1.Create two stacks q1 and q2
    2. push elements in q2.
    3. Pop elements from q1 and push them in q2
    4. Pop all elements from q2 and transfer them back to q1.
         
         In this way q1 will have elements in reverse order
*/

class Stack
{
    queue<int> q1;
    queue<int> q2;
public:
    void push(int x)
    {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        q1.pop();
    }
    int top()
    {
        return q1.front();
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
}
