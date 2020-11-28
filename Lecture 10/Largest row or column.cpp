#include<iostream>
using namespace std;

int sum_row(int arr[100][100], int m, int n,int k, int b[]){	
	for(int i=0; i<m; i++){
		int s=0;
		for(int j=0; j<n; j++){
			s = s + arr[i][j];
		}
		b[k] = s;
		k++;
	}
	return k;
}

int sum_column(int arr[100][100], int m, int n,int k, int b[]){	
	for(int j=0; j<n; j++){
		int s=0;
		for(int i=0; i<m; i++){
			s = s + arr[i][j];
		}
		b[k] = s;
		k++;
	}
	return k;
}

int maximum(int b[]){
	int max = INT_MIN;
	int t=0;
	for(int i=0; b[i] != '\0'; i++){
		if(b[i]>max){
			max =b[i];
			t = i;
		}
	}
	return t;
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
	
	int b[100];
	int k=0;
	k = sum_row(arr,m,n,k,b );
	k = sum_column(arr,m,n,k,b);
	b[k] = '\0';
	
	for(int i=0; b[i] != '\0'; i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	
	int max = maximum(b);
	if(max<m){
		cout<<"row : "<<max<<" "<<b[max]<<endl;
	}
	else{
		cout<<"column : "<<max-m<<" "<<b[max]<<endl;
	}
}
