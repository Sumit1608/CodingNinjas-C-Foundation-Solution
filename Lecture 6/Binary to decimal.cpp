#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int r, q=n, dcml=0, p=1;
	while(q>0){
		r = q%10;
		q = q/10;
		
		dcml = dcml + p*r;
		p=p*2;
	}
	cout<<dcml;
}
