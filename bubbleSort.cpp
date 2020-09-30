#include <iostream>

using namespace std;

void bubbleSort(int arr[], int term) {
	int flag=0;
	for(int i = 0; i < term; ++i) {
		for(int index = 0; index < term-i-1; ++index) {
			flag=1;
			if(arr[index] < arr[index + 1]) {
				int swap;
				swap = arr[index];
				arr[index] = arr[index + 1];
				arr[index + 1] = swap;
				flag=0;
			}
		}
	}
	for(int counter = 0; counter < term; counter++) {
		cout << arr[counter] << endl;
	}
}

int main() {
	int arr[100];
	int n,i;
	cout << "Hi in this program I will do bubble sort" << endl;
	cout << "Enter the Size of the Array : "<< endl;
	cin>>n;
	cout<<"Enter the Elements of the Array : "<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i]
	bubbleSort(arr, n);
	if(flag==1)
		cout<<"Array is already sorted. ";
	else{		
		cout<<"The sorted array is given as :"<<endl;
		for(i=0;i<n;i++)
			cout<<arr[i];
	}
	//answer = [2, 5, 6, 9, 2, 10]
}
