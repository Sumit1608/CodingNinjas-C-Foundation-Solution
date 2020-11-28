#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number to be reversed :";
	cin>>n;
	
	int r,q=n,p=0;
	while(q >0){
		r=q%10;
		q=q/10;
		
		p = p*10 + r;
	}
	cout<<p;
}
