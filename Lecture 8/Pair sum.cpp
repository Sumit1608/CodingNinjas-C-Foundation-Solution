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
	int x;
	cout<<"Enter the sum of which number to be printed :";
	cin>>x;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j || arr[i]>arr[j]){
				continue;
			}
			if(arr[i] + arr[j] == x){
				cout<<arr[i]<<" "<<arr[j]<<endl;
			}
		}
	}
}
