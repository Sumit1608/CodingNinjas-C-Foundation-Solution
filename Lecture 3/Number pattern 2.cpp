#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n ";
	cin>>n;
	
	int i=1;
	while (i<=n){
		int k=1;
		while(k <= n-i){
			cout<<" ";
			k++;
		}
		
		int j=1;
		int val=i;
		while(j<=i){
			cout<<val;
			val++;
			j++;
		}
		cout<<endl;
		i++;
	}
}