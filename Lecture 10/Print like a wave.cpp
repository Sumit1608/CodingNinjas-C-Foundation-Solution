#include<iostream>
using namespace std;

void printWave(int arr[][100],int row, int column){
	int m = row, n = column;
	for(int j=0; j<n; j++){
		if(j%2 == 0){
			for(int i=0; i<m; i++){
				cout<<arr[i][j]<<" ";
	    	}
		}
		else{
			for(int i=m-1 ; i>=0; i--){
				cout<<arr[i][j]<<" ";
			}
		}
	}
}

int main(){
	int arr[100][100];
	int m,n;
	cout<<"Enter the no of rows and columns : ";
	cin>>m>>n;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<"	";
		}
		cout<<endl;
	}
	
	printWave(arr,m,n);
}
