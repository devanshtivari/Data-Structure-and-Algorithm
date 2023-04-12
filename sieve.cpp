//sieve of erotesthenes
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    cout<<"Enter number: ";
    int n;cin>>n;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=true;
    int c=0;
    for(int i=2 ; i<n ; i++){
        if(prime[i]){
            c++;
            for(int j=2*i ; j<n ; j=j+i){
                prime[j]=false;
            }
        }
    }
    cout<<"the count is: "<<c;
}

//finding numnber of prime number in the range of the given number
