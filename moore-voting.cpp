#include<iostream>
using namespace std;

/*
     ALGORITHM
  1. By using the moore voting algorithm to find majority element.
  2. Printing the result
*/

int findMajority(int arr[], int n)
{
	int i, candidate = -1, votes = 0;
	for (i = 0; i < n; i++) {
		if (votes == 0) {
			candidate = arr[i];
			votes = 1;
		}
		else {
			if (arr[i] == candidate)
				votes++;
			else
				votes--;
		}
	}
	int count = 0;
	for (i = 0; i < n; i++) {
		if (arr[i] == candidate)
			count++;
	}

	if (count > n / 2)
		return candidate;
	return -1;
}

int main()
{
    cout<<"Enter the size of array : ";
    int s;cin>>s;
    int arr[s];
    cout<<"Enter elements of array-\n";
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    int ans = findMajority(arr , s);
    cout<<"Majority element is : "<<ans;
}
