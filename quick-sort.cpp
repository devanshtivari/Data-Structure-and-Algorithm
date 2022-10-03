#include <iostream>
using namespace std;

void swap(int* a, int* b) //swapping
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i=(low-1);
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void Display(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	cout<<"Enter size of array : ";
	int s;cin>>s;
	int arr[s];
	cout<<"Enter elements of array-\n";
	for(int i=0 ; i<s ; i++){
        cin>>arr[i];
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	cout << "Sorted array: \n";
	Display(arr, n);
	return 0;
}
