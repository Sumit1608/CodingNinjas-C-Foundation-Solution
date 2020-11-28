#include<iostream>
using namespace std;

int bineary_search(int arr[], int n, int x){
	int start =0,end = n-1;
	while(start <= end){
		int mid = (start + end)/2;
		if(arr[mid] == x){
			return mid;
		}
		else if( arr[mid] > x){
			end = mid-1;
		}
		else{
			start = mid +1;
		}
	}
	return -1;
}

int main(){
	int n,x;
	cout<<"Enter the size of the array :";
	cin>>n;
	int arr[100];
	cout<<"Enter the elements of sorted array"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter the number to be searched :";
	cin>>x;
	
	int v = bineary_search(arr, n, x);
	if(v == -1){
		cout<<"The element is not present in the array "<<v<<endl;
	}
	else{
		cout<<"The index of the element in array is "<<v<<endl;
	}
}
