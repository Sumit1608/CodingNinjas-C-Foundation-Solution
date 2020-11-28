#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;
	cout<<"Enter the elements of array :"<<endl;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int j=0; j<n;j++){
		for(int i=1; i<n-1-j; i++){
			if(arr[i] >arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	cout<<"The required array is "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
