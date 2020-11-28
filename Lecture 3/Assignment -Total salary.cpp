#include<iostream>
using namespace std;

int main(){
	cout<<"Enter basic salary and grade"<<endl;
	int basic, allow;
	cin>> basic;
	
	char d;
	cin>>d;
	
	double hra, da, pf;
	hra = 0.2*basic;
	da = 0.5*basic;
	pf = 0.11*basic;
	
	if(d=='A')
	{
		allow = 1700;
	}
	else
	{
		if(d == 'B')
		{
			allow= 1500;
		}
		else
		{
			allow = 1300;
		}
	}
	
	double ts = basic + hra + da + allow - pf;
	cout<<"Total salary is "<<ts;
}
