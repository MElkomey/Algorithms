/*
BUBBLE SORT
wosrt case O(n^2)  , space complexity O(1)
need n-1 of passes
*/



#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort_asc(int arr[], int size)
{
	int swaps = 0;
	for (int i = 0;i < size - 1;i++) {  // #passes
		for (int j = 0;j < size - i-1;j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swaps++;
			}
		}
		//if array is already sorted
		if (swaps == 0)
			break;
	}
}


void bubble_sort_desc(int arr[], int size)
{
	int swaps = 0;
	for (int i = 0;i < size-1;i++) {   // #passes
		for (int j = 0;j < size-i-1;j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swaps++;
			}
		}
		//if array is already sorted
		if (swaps == 0)
			break;
	}
}


void display(int arr[], int size) {
	cout << "[ ";
	for (int i = 0;i < size-1;i++)
		cout << arr[i] << " ,";
	cout << arr[size-1] << "]" << endl;
}


int main() {
	int arr[] = {1,6,-50,6,9,11},arr2[]={6,16,-5,77,8,100};
	bubble_sort_asc(arr, 6);
	display(arr, 6);
	bubble_sort_desc(arr2, 6);
	display(arr2, 6);
	return 0;
}
