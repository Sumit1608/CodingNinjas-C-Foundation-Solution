#include<iostream>
using namespace std;

int lenght(char arr[]){
	int count=0;
	for(int i=0; arr[i] != '\0'; i++){
		count ++;
	}
	return count;
}

void palindrome(char arr[], int n){
	int f =0;
	for(int i=0; i <= (n-1)/2; i++){
		if(arr[i] == arr[n-1-i]){
			f++;
		}
		else{
			cout<<"Not a palindrome :"<<"False"<<endl;
			break;
		}
	}
	if( f == (n+1)/2 ){
		cout<<"True"<<endl;
	}
}

int main(){
	char arr[100];
	cout<<"Enter the string :";
	cin>>arr;
	
	int s = lenght(arr);
	palindrome(arr,s);
}
