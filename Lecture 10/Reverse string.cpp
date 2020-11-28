#include<iostream>
using namespace std;

int lenght(char arr[]){
	int count=0;
	for(int i=0; arr[i] != '\0'; i++){
		count ++;
	}
	return count;
}

void reverseString( char arr[]){
	int len = lenght(arr);
	int i=0, j= len -1;
	while(i<j){
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

int main(){
	char arr[100];
	cout<<"Enter the string :";
	cin.getline(arr, 100);
	
	reverseString(arr);
	cout<<arr<<endl;
}
