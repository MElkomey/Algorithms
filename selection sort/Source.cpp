//SELECTION SORT
//doesn't take extra space,suitable for array
//time complexity=O(n^2)  , space complexity=O(1)


#include <iostream>
using namespace std;

void selection_sort_asc(int arr[], int size) {
	for (int i = 0;i < size-1;i++) {
		int min = i;
		for (int j = i + 1;j <size;j++) {
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}


void selection_sort_desc(int arr[], int size) {
	for (int i = 0;i < size-1;i++) {
		int max = i;
		for (int j = i + 1;j < size;j++) {
			if (arr[j] > arr[max])
			{
				max = j;
			}
		}
		swap(arr[i], arr[max]);
	}
}

void swap(int &x,int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void display(int arr[],int size) {
	cout << "[ ";
	for (int i = 0;i < size-1;i++) {
		cout << arr[i] << " ,";
	}
	cout<<arr[size-1] << " ]" << endl;
}

int main() {
	int arr[]={4,-48,94,7,-6,3};
	selection_sort_asc(arr, 6);
	display(arr, 6);

	selection_sort_desc(arr, 6);
	display(arr, 6);
	return 0;
}