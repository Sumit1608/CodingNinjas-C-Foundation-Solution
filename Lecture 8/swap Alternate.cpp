#include<iostream>
using namespace std;

int main(){
	int arr[100], n;
	cout<<"Enter the number of elements in array ";
	cin>>n;
	cout<<"Enter the elements of the array"<<endl;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	if(n%2 == 0){
		int i=0;
		int temp =0;
		while(i<n){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			i=i+2;
		}
	}
	else{
		int i=0;
		int temp =0;
		while(i < n-1){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			i=i+2;	
		}
	}
	
	cout<<"Array after swaping alternates is "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
