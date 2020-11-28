#include<iostream>
using namespace std;
#include<cstring>

void removeChar(char str[], char c){
	int len = strlen(str);
	
	for(int i=0; i<len;){
		if(str[i] == c){
			for(int j=i; j<len; j++){
				str[j] = str[j+1];
			}
			len--;
			continue;
		}
		i++;
	}	
}

int main(){
	char str[150];
	cout<<"Enter the string :"<<endl;
	cin.getline(str,150);
	
	char c;
	cout<<"Enter the character to be removed from string : ";
	cin>>c;
	
	removeChar(str,c);
	cout<<str<<endl;
}
