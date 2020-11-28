#include<iostream>
using namespace std;

int main(){
	int u,n,i=1,s=1;
	cout<<"Enter the number and its power ";
	cin >>u >>n;
		
	if(n == 0 || u==0)
	{
		cout<<1;
	}
	else
	{

		while(i<=n){
			s = s*u;
			i++;
		}
		cout<<s;
	}
}
