#include<iostream>
using namespace std;

int linear_search( int arr[],int n, int x){
	for(int i=0; i<n; i++){
		if (arr[i] == x){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	cout<<"Enter elements to be stored in array"<<endl;
	
	int arr[100];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the number to be searched : ";
	int x;
	cin>>x;
	
	int ans = linear_search(arr, n, x);
	if(ans == -1){
		cout<<"The element is not in the array "<<ans<<endl;
	}
	else{
		cout<<"The index of the element in the array is : "<<ans<<endl;
	}
}
