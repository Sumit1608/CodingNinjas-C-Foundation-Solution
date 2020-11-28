#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int k=1;
		while(k<= n-i){
			cout<<" ";
			k++;
		}
		
		int j=1;
		int val=i;
		while(j<= i){
			cout<<val;
			j++;
			val++;
		}
		
		int t=i-1;
		while(t >=1){
			cout<<val-2;
			t--;
			val--;
		}
		cout<<endl;
		i++;
	}
}
