#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements in array : ";
	cin>>n;
	int arr[100];
	cout<<"The elements of array are"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				int temp = 4;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
}
