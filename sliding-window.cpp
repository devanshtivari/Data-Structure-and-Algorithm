#include<iostream>
#include<deque>
using namespace std;

/*
                ALGORITHM
    1. Take inputs the size of array(s), array(arr), the size of window(k), and the desired sum(sum)
    2. Declare a Deque to insert element at last and pop them from front.
    3. Declare a function Sum which calculate the sum of Deque.
    4. Push and Pop the elements in the Deque until the desired sun is found.
    5. If sum is found update the flag counter by one, if not found then display sub-array not found.
*/

int Sum(deque<int> dq)
{
    int sum=0;
    while(!dq.empty()){
        sum+=dq.front();
        dq.pop_front();
    }
    return sum;    //returning the sum of deque
}

void maxSumwindow(int arr[], int s,int k, int sum)
{
    int flag=0;   //flag counter to be updated if sum found
    deque<int>dq;
    for(int i=0 ; i<k ; i++){
        dq.push_back(arr[i]);    //inserting initial elements
    }
    if(Sum(dq)==sum){
        cout<<"1"<<k;
        return;
    }
    for(int i=k ; i<s ; i++){
        dq.pop_front();
        dq.push_back(arr[i]);    //popping the front element and inserting at last of the deque
        if(Sum(dq)==sum){
            cout<<i-k+2<<i+1;
            flag++;    //flag counter to be updated if sum found
            break;
        }
    }
    if(flag==0){cout<<"No such sub-array found";}
}

int main()
{
    cout<<"Enter size of array : ";   //taking inputs
    int s;cin>>s;
    int arr[s];
    cout<<"Enter elements of array-\n";
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    cout<<"Enter size of slot : ";
    int k;cin>>k;
    cout<<"Enter value of sum : ";
    int sum;cin>>sum;
    maxSumwindow(arr, s, k, sum);
}
