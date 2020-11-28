#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	
	int arr[100];
	int i=0;
	
	for(int j=1; j<=n; j++){
		if(j%2 == 1){
			arr[i] = j;
			i++;
		}
	}
	for(int j=n; j>=2; j--){
		if(j%2 == 0){
			arr[i] = j;
			i++;
		}
	}
	
	for(int j=0; j<n; j++){
		cout<<arr[j]<<" ";
	}
}
