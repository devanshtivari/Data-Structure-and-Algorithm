#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n][n] , arr2[n][n] , arr3[n][n];
    cout<<"Enter elements of first array-\n";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter elements of second array-\n";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum of array is-\n";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Multiplication of array is-\n";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            arr3[i][j] = 0;
            for(int k=0 ; k<n ; k++){
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}
