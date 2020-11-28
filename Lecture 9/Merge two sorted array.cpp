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
	
	int i=0,j=0,s=0;
	int C[100];
	
	while(i<m || j<n){
		if(A[i]<B[j]){
			C[s] = A[i];
			i++;
			s++;
		}
		else{
			C[s] = B[j];
			j++;
			s++;
		}
	}
		
	cout<<"The sorted array is "<<endl;
	for(int i=0; i<n+m; i++){
		cout<<C[i]<<" ";
	}
}
