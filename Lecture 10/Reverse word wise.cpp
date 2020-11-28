#include<iostream>
using namespace std;

int lenght(char arr[]){
	int count =0;
	for(int i=0; arr[i] != '\0'; i++){
		count ++;
	}
	return count;
}

void reverseWord(char arr[], int i, int j){
	while(i<j){
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

void reverseWordWise(char arr[]){
	//Reversing the whole string
	int len = lenght(arr);
	int i=0,j= len-1;
	while(i<j){
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	//Reversing individual words
	int start =0,end = 0;
	for( i=0; i<len; i++){
		if(arr[i] == ' '){
			end = i-1;
			reverseWord(arr,start,end);
			start = i+1;
			end = i+1;
		}
	}
	//Reversing last word
	end = i-1;
	reverseWord(arr,start,end);
}

int main(){
	char arr[100];
	cout<<"Enter the string ";
	cin.getline(arr,100);
	
	reverseWordWise(arr);
	
	cout<<arr<<endl;
}
