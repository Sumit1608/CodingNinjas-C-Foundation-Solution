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
	
	int i,k=0;
	for(i=1; i<n; i++){
		if(arr[i] != 0){
			int temp = arr[k];
			arr[k] = arr[i];
			arr[i] = temp;
			k++;
		}
	}
		
	cout<<"The required array is "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
