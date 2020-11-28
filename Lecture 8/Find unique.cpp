#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements in array : ";
	cin>>n;
	
	n=2*n +1;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		int num =0;
		for(int j=0; j<n; j++){
			if(i == j){
				continue;
			}
			if(arr[i] == arr[j]){
				num =1;
				break;
			}
		}
		
		if(num == 0){
			cout<<"The unique number is "<<arr[i]<<endl;
		}
	}
	
}
