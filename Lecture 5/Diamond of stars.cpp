#include<iostream>
using namespace std;

int main(){
	int s;
	cin>>s;
	int n = 2*s+1;
	
	int i=1;
	while(i<=(n+1)/2){
		int k=1;
		while(k<= (n+1)/2-i){
			cout<<" ";
			k++;
		}
		
		int j=1;
		while(j<= 2*i-1){
			cout<<"*";
			j++;
		}

		cout<<endl;
		i++;
	}
	
	i=s;
	while(i>=1){
		int k=1;
		while(k<=s-i+1){
			cout<<" ";
			k++;
		}
		int j=1;
		while(j<=2*i-1){
			cout<<"*";
			j++;
		}
		
		cout<<endl;
		i--;
	}
}
