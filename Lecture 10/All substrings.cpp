#include<iostream>
using namespace std;

void AllSubstrings( char arr[]){
	for(int k=0; arr[k] != '\0'; k++){
	//k represents start of string to be printed
		for(int i=k; arr[i] != '\0'; i++){
        //i represents end of string to be printed
			for(int j=k; j<=i; j++){
			//j used to print string from start to end	
				cout<<arr[j];
			}
			cout<<endl;
		}
	}
}

int main(){
	char arr[100];
	cout<<"Enter the string : ";
	cin>>arr;
	
	AllSubstrings(arr);
}
