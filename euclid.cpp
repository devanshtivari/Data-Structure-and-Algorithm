//finding gcd using euclid algorithm
#include<iostream>
#include<vector>

using namespace std;

int gcd(int a,int b)
{
    if(a==0){
        return 0;
    }
    else if(b == 0){
        return a;
    }
    else if(a==1 || b == 1){
        return 1;
    }
    else{
        gcd(b,a%b);
    }
}

int main()
{
    cout<<"Enter first number: ";
    int a;cin>>a;
    cout<<"Enter second number: ";
    int b;cin>>b;
    cout<<"GCD of both the number are: "<<gcd(a,b);
}
