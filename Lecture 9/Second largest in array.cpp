#include<iostream>
using namespace std;

void second_max(int arr[], int n){
	if(n<=1 || arr[0] == arr[1]){
		cout<<"-2147483648";
	}
	else{
		int first = INT_MIN, second= INT_MIN;
		
		for(int i=0; i<n;i++){
			if(arr[i]>first){
				second = first;
				first = arr[i];
			}
			else if( arr[i] > second && arr[i] != first){
				second = arr[i];
			}
		}
		cout<<"The second largest number in array is :"<<second<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;
	cout<<"Enter the elements of array :"<<endl;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	second_max(arr, n);
}
