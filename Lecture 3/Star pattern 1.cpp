#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n ";
	cin>>n;
	
	int i=1;
	while (i<=n){
		int f=1;
		while(f<= n-i){
			cout<<" ";
			f++;
		}
		
		int j = 2*i-1;
		int k=1;
		while(k<=j){
			cout<<"*";
			k++;
		}
		cout<<endl;
		i++;
	}
}
