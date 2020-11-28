#include<iostream>
using namespace std;

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
		
	for(int j=0; j<n; j++){
		int sum_of_column= 0;
		for(int i=0; i<m; i++){
			sum_of_column = sum_of_column + arr[i][j];
		}
		cout<<"The sum of column "<<j<<" is : "<<sum_of_column<<endl;
	}
}
