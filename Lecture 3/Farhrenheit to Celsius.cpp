#include<iostream>
using namespace std;

int main(){
	int f,c,s,e,w;
	cin>>s>>e>>w;
	f=s;
	while(f<=e){
		c = (5*(f-32))/9;
		cout<<f<<'\t'<<c<<endl;
		f = f+w;
	}
}
