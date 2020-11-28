#include<iostream>
using namespace std;

void rotate_array(int arr[], int n, int d){
	if(d <= n){
		int i=0;
		while(i<d){
			int move = arr[0];
			for(int j=0; j<n-1; j++){
				arr[j] = arr[j+1];
			}
			arr[n-1] = move;
			i++;
		}
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
	
	int d;
	cout<<"Enter the number by which array is to be rtated :";
	cin>>d;
	rotate_array(arr,n,d);
		
	cout<<"The required array is "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
