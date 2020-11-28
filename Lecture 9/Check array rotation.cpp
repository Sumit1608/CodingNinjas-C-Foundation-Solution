#include<iostream>
using namespace std;

int check_rotation(int arr[], int n){
	int min = arr[0],r=0;
	for(int i=1; i<n; i++){
		if(arr[i]<min){
			min = arr[i];
			r = i;
		}
	}
	return r;
}

int main(){
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;
	cout<<"Enter the elements of the sorted rotated array :"<<endl;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int ans = check_rotation(arr,n);
	cout<<"The rotation of array is :"<<ans<<endl;
}
