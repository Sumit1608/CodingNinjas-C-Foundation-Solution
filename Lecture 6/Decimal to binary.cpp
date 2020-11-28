#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i=1,j=n, bnry=0;
	while(j>0){
		bnry = bnry + (n%2)*i;
		i = i*10;
		n = n/2;
		j=j/2;
	}
	cout<<bnry;
}
