#include<iostream>
using namespace std;

char highestOccuring(char str[]){
	int f[256];
	for( int i=0; i<256; i++){
	 	f[i]=0;
	}
	
	for(int i=0; str[i] !='\0'; i++){
		int k = str[i];
		f[k]++;
	}
	
	int max = -1,index=0;
	for(int i =0; i<256; i++){
		if(f[i]>max){
			max = f[i];
			index =i;
		}
	}
	return index;
}
		
int main(){
	char str[100];
	cout<<"Enter the string :"<<endl;
	cin>>str;
	
	char ans = highestOccuring(str);
	cout<<"The highest occuring character in string is : "<<ans<<endl;
}
