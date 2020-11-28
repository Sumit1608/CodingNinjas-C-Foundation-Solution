#include<iostream>
using namespace std;

int lenght(char arr[]){
	int count=0;
	for(int i=0; arr[i] != '\0'; i++){
		count ++;
	}
	return count;
}

void replace(char c1[], char c2[]){
	for(int i =0; c1[i] != '\0'; i++){
		if(c1[i] == c2[0]){
			c1[i] = c2[1];
		}
	}
	cout<<c1<<endl;
}

int main(){
	char c1[100];
	cout<<"Enter the string :";
	cin>>c1;
	
	char c2[100];
	cout<<"Enter the character to be replced :";
	cin>>c2[0];
	cout<<"Enter the character by which to be replaced :";
	cin>>c2[1];
	
	replace(c1,c2);	
}
