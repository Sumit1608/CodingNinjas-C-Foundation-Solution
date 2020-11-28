#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	
	int arr[100];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	int max = arr[0];
	
	for(int i=1; i<n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	cout<<"The maximum number is "<<max<<endl;
}
