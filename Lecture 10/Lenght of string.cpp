#include<iostream>
using namespace std;

int lenght(char arr[]){
	int count=0;
	for(int i=0; arr[i] != '\0'; i++){
		count ++;
	}
	return count;
}

int main(){
	char arr[100];
	cout<<"Enter the string :";
	cin>>arr;
	
	int s = lenght(arr);
	cout<<"The lnght of string is :"<<s<<endl;
}
