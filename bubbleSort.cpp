#include <iostream>
#include <stdio.h>

using namespace std;

void bubbleSort(int arr[], int term) {
	for(int i = 0; i < term; ++i) {
		for(int index = 0; index < term-i-1; ++index) {
			if(arr[index] < arr[index + 1]) {
				int swap;
				swap = arr[index];
				arr[index] = arr[index + 1];
				arr[index + 1] = swap;
			}
		}
	}
	for(int counter = 0; counter < term; counter++) {
		cout << arr[counter] << endl;
	}
}

int main() {
	cout << "Hi in this program I will do bubble sort" << endl;
	cout << "The numbers are 3, 9, 5, 10, 6"<< endl;
	int num[9] = {3, 9, 5, 3, 10, 6, 3, 3, 3};
	int terms = sizeof (num) / sizeof (num[0]);
	bubbleSort(num, terms);

	//answer = [2, 5, 6, 9, 2, 10]
}
