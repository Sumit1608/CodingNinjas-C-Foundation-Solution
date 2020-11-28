#include<iostream>
using namespace std;
#include<cstring>

void reverseWord(char arr[], int i, int j){
	while(i<j){
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j--;
		i++;
	}
}

void reverseEachWord(char arr[]){
	//Reversing each word
	int start =0, end =0;
	int len = strlen(arr);
	int i=0;
	for(i=0; i<len; i++){
		if(arr[i] == ' '){
			end = i-1;
			reverseWord(arr,start,end);
			start = i +1;
			end = i+1;
		}
	}
	//Reversing the last word
	end = i-1;
	reverseWord(arr,start,end);
	
}

int main(){
	char str[100];
	cout<<"Enter the string :"<<endl;
	cin.getline(str,100);
	
	reverseEachWord(str);
	cout<<str<<endl;
}
