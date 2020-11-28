#include<iostream>
using namespace std;
	
int main(){
	int n;
	cin>>n;
	cout<<"The nth fibonacci number is : "<<endl;
	
	int f[n+1], i;
	f[0]=0;
	f[1]=1;
	f[2]=1;
	for(i=2; i<=n; i++){
		f[i] = f[i-1] + f[i-2];
	}
	cout<<f[n];
}
