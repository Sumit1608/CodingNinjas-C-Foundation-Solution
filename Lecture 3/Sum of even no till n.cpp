#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cout<<"Enter n"<<endl;
	cin>>n;
	
	if(n%2 == !0)
	{
		n = n-1;
	}
	
	while(n >= 0)
	{
		sum = sum + n;
		n=n-2;
	}
	
	cout<<sum<<endl;
}
