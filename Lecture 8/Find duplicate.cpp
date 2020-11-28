#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements in array : ";
	cin>>n;
	
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
				cout<<arr[i]<<endl;
				break;
			}
		}
		
		if(num == 1){
			break;
		}
	}
	
}
