#include<iostream>
#include<stdio.h>;
#include<string.h>;
using namespace std;
int main(){
	char String[50];
	cout<<"Enter the string/line of text:";
	gets(String);
	int len=strlen(String);
	int i,j,last=0;
	for(i=0;i<len; ){
		j=i;
		while(String[j]!=' '&&String[j]!='\0')
		   j++;
		last=j;
		if(j&2==0)
		  last=j;
		else 
		  last=j-1;
		char ch1;
		for(int k=i;k<last;k+=2){
			ch1=String[k];
			String[k]=String[k+1];
			String[k+1]=ch1;
		}
		i=j+1;
	}
	cout<<String<<endl;
	return 0;
	
}

