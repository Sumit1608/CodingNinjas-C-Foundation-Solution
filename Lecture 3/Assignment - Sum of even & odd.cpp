#include<iostream>
using namespace std;

int main(){
	int n,r;
	cout<<"Enter the number ";
	cin>>n;
	
	int sum_even = 0;
	int sum_odd = 0;

	while(n > 0){
		
		r=n%10;
		if(r%2 == 0)
		{
			sum_even = sum_even + r;
		}
		else
		{
			sum_odd = sum_odd +r;
		}
		n = n/10;
	}
	
	cout<<"Sum of even digits are "<<sum_even<<endl;
	cout<<"Sum of odd digits are "<<sum_odd<<endl;
}
