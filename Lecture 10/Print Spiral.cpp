#include<iostream>
using namespace std;

void spiralPrint(int arr[][100], int m, int n){
	int rowStart = 0, columnStart =0;
	int rowEnd = m-1, columnEnd = n-1;
	int k= 0;
	while( k <= m*n){
		for(int j=columnStart; j<=columnEnd; j++){
			int i= rowStart;
			cout<<arr[i][j]<<" ";
			k++;	
		}
		rowStart ++;
		for(int i=rowStart; i<=rowEnd; i++){
			int j=columnEnd;
			cout<<arr[i][j]<<" ";
			k++;
		}
		columnEnd--;
		for( int j=columnEnd; j>=columnStart; j--){
			int i = rowEnd;
			cout<<arr[i][j]<<" ";
			k++;
		}
		rowEnd--;
		for(int i=rowEnd; i>=rowStart; i--){
			int j= columnStart;
			cout<<arr[i][j]<<" ";
			k++;
		}
		columnStart++;
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
		
	spiralPrint(arr,m,n);
}
