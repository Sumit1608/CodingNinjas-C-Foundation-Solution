#include<iostream>
using namespace std;

bool checkPermutation(char s[], char t[]){
	int frequency[256];
	for( int i=0; i<256; i++){
		frequency[i] = 0;
	}
	
	for( int i=0; s[i] != '\0'; i++){
		int k = s[i];
		frequency[k] +=1;
	}
	
	for(int i=0; t[i] != '\0'; i++){
		int k= t[i];
		frequency[k] -=1;
	}
	
	for(int i=0; i<256;i++ ){
		if(frequency[i] != 0){
			return false;
		}
	}
	return true;
}

int main(){
	char s[100],t[100];
	cout<<"Enter the string s"<<endl;
	cin>>s;
	cout<<"Enter the string t"<<endl;
	cin>>t;
	
	bool ans = checkPermutation(s,t);
	if(ans){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}
