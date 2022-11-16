#include<iostream>
using namespace std;

int gcd(int a , int b)
{
    if(a==0)
        return b;
    return gcd(b%a , a);
}

int main()
{
   cout<<"Enter value of A : ";
   int a;cin>>a;
   cout<<"Enter value of B : ";
   int b;cin>>b;
   cout<<"The GCD of both the numbers is : "<<gcd(a,b);
}
