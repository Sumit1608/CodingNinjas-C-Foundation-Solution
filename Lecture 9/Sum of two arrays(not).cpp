#include<iostream>
using namespace std;

int main(){
	int m;
	cout<<"Enter the size of the array A :";
	cin>>m;
	cout<<"Enter the elements of sorted array A :"<<endl;
	int A[100];
	for(int i=0; i<m; i++){
		cin>>A[i];
	}
	
	int n;
	cout<<"Enter the size of the array B :";
	cin>>n;
	cout<<"Enter the elements of sorted array B :"<<endl;
	int B[100];
	for(int i=0; i<n; i++){
		cin>>B[i];
	}
	int C[100];
	
	int carry =0;
	if(n == m ){
		int i=m-1;
		while(i >= 0){
			int sum = A[i] + B[i] + carry;
			carry = sum/10;
			C[i+1] = sum%10;
		}
		C[i+1] = carry;
	}
	else if(m>n){
		m+1;
	}
	else{
		n +1;
	}
	
	for(int i =0; i<=m; i++){
		cout<<C[i];
	}
}
