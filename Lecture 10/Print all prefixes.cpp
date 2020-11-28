#include<iostream>
using namespace std;

void printAllPrefixes( char arr[]){
	//i represnts the end index of the prefix
	for(int i=0; arr[i] != '\0'; i++){
		//j represents start index of prefix
		for(int j=0; j<=i; j++){
			cout<<arr[j];
		}
		cout<<endl;
	}
}

int main(){
	char arr[100];
	cout<<"Enter the string : ";
	cin>>arr;
	
	printAllPrefixes(arr);
}
