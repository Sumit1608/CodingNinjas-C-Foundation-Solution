#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
	for(int i =0; i<n-1; i++){
		//Find min element in array
		int min = arr[i], minIndex =i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < min){
				min = arr[j];
				minIndex = j;
			}
		}
		//Swap
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

int main(){
	int n;
	cout<<"Enter the size of the array ";
	cin>>n;
	cout<<"Enter the elements of array "<<endl;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	selection_sort(arr, n);
	
	cout<<"The sorted array is "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
