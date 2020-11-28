#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the n terms of the series ";
	cin>>n;
	int count=1;
	
	for(int i=1; count<=n; i++){
		int t = 3*i+2;
		if( t%4 !=0){
			cout<<t<<' ';
			count++;
		}
	}
}
