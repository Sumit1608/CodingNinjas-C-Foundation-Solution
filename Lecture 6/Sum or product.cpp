#include<iostream>
using namespace std;

int main(){
	int n,c;
	cout<<"Enter integer n: ";
	cin>>n;
	cout<<"Enter choice :";
	cin>>c;
	
	if(c == 1){
		int sum=0;
		for( int i=1; i<=n; i++){
			sum = sum+ i;
		}
		cout<<sum<<endl;
	}
	else if(c==2){
		int pdct =1;
		for(int i=1; i<=n; i++){
			pdct = pdct*i;
		}
		cout<<pdct<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
}
