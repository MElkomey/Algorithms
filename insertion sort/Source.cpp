

/*
INSERTION SORT
time complexity O(n^2),  space complexty O(1)
disadvantage -> shifting  while using array
advantages is no shifting while using with linkedList
*/
#include <iostream>
using namespace std;

void insertion_sort_asc(int arr[], int size) {
	for (int i = 1; i < size;i++)
	{
		int j = i;
		while (arr[i] < arr[j - 1] && j>0)
		{
			j--;
		}
		int temp = arr[i];
		for (int k = i;k > j;k--)
		{
			arr[k] = arr[k - 1];
		}
		arr[j] = temp;
	}
}


void insertion_sort_desc(int arr[], int size) {
	for (int i = 1; i < size;i++)
	{
		int j = i;
		while (arr[i] > arr[j - 1] && j>0)
		{
			j--;
		}
		int temp = arr[i];
		for (int k = i;k > j;k--)
		{
			arr[k] = arr[k - 1];
		}
		arr[j] = temp;
	}
}

void display(int arr[], int size) {
	for (int i = 0;i < size;i++)
		cout << arr[i] << "  ";
	cout << endl;
}

int main() {
	int arr[] = {-10,-30,4,8,99,15},arr2[]={1,2,3,4,8,9};
	insertion_sort_asc(arr, 6);
	display(arr, 6);

	insertion_sort_desc(arr2, 6);
	display(arr2, 6);

	return 0;
}