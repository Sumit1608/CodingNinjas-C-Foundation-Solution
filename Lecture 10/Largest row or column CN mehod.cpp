#include<iostream>
using namespace std;

void findLargest(int arr[][100], int m, int n){
	int maxSum = INT_MIN, index = -1;
	bool isRow = true;
	int rowSum;
	for(int i=0; i<m; i++){
		rowSum =0;
		for(int j=0; j<n; j++){
			rowSum += arr[i][j];
		}
		if(rowSum > maxSum){
			maxSum = rowSum;
			index = i;
		}
	}
	for(int j=0; j<n; j++){
		int colSum =0;
		for(int i=0; i<m; i++){
			colSum += arr[i][j];
		}
		if(colSum > rowSum){
			isRow = false;
			maxSum = colSum;
			index = j;
		}
	}
	
	if(isRow){
		cout<<"row ";
	}
	else{
		cout<<"column ";
	}
	cout<<index<<" "<<maxSum<<endl;
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
	
	findLargest(arr,m ,n);
}
