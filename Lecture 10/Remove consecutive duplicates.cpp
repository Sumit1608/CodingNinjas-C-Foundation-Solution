#include<iostream>
using namespace std;
#include<cstring>

int main(){
	char str[100];
	cout<<"Enter the string"<<endl;
	cin>>str;
	
	int len = strlen(str);
	int i=0;
	while( str[i] != '\0'){
		if(str[i] == str[i-1]){
			for(int j=i-1; j<len; j++){
				str[j] = str[j+1];
			}
			len--;
			continue;
		}		
		if(str[i] == str[i+1]){
			for(int j=i; j<len; j++){
				str[j] = str[j+1];
			}
			len--;
		}
		i++;
	}
	
	cout<<str;
}
