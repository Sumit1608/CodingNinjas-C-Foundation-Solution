#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int j,i=1;
	j = i*i;
	
	while(j<=n){
		i++;
		j= i*i;
	}
	cout<<i-1;
}
