#include<iostream>
using namespace std;

int main(){
	char c;
	c= cin.get();
	int c_chr=0, c_digit=0, c_space=0;
	
	while(c != '$'){
		if(c>='a' && c<='z'){
			c_chr++;
		}
		else{
			if(c>='0' &&c<='9'){
			c_digit++;
			}
			else{
				c_space++;
			}
		}
		c= cin.get();
	}
	
	cout<<c_chr<<' '<<c_digit<<' '<<c_space<<endl;
}
