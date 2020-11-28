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
	int j=0;
	for(int i=0; arr[i] != '\0'; i++){
		if(arr[i] != ' '){
			arr[j] = arr[i];
			j++;
		}
	}
	arr[j] = '\0';
	cout<<arr<<endl;
}

int main(){
	char arr[100];
	cout<<"Enter the string :";
	cin.getline(arr,100);
	
	trimSpaces(arr);
}
