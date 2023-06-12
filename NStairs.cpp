#include<iostream>
using namespace std;

//program to solve the problem of n stirs with the condition of f(n) = f(n-1) + f(n-2)

int NStairs(int n)
{
    if(n<0)
        return 0;
    else if (n ==0)
        return 1;

    int ans = NStairs(n-1) + NStairs(n-2);
    return ans;
}

int main()
{
    int stairs;cin>>stairs;
    cout<<NStairs(stairs);
}
