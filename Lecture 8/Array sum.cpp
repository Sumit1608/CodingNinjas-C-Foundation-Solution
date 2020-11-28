#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	cout<<"Enter elements to be stored in array"<<endl;
	
	int arr[100];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int sum =0;
	for(int i=0; i<n; i++){
		sum = sum + arr[i];
	}
	
	cout<<"The sum of elements of array is "<<sum<<endl;
}
