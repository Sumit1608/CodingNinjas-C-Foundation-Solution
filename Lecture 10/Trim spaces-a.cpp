#include<iostream>
using namespace std;

int lenght(char arr[]){
	int count=0;
	for(int i=0; arr[i] != '\0'; i++){
		count ++;
	}
	return count;
}

void trimSpaces(char arr[]){
	char output[100];
	int j=0;
	
	for(int i=0; arr[i] != '\0'; i++){
		if(arr[i] != ' '){
			output[j] = arr[i];
			j++;
		}
	}
	output[j] = '\0';
	cout<<output<<endl;
}

int main(){
	char arr[100];
	cout<<"Enter the string :";
	cin.getline(arr,100);
	
	trimSpaces(arr);
}
