#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;
const int size=50;
int Push(int Stack[],int &top,int ele){
	if(top==size-1)
	   return -1;
	else{
		top++;
		Stack[top]=ele;
	}
	return 0;
}
void Display(int Stack[],int top){
  cout<<Stack[top]<<" <--\n";
  for(int i=top-1;i>=0;--i){
  	cout<<Stack[i]<<endl;
  }
}
int main(){
	int Stack[size],Item,top=-1,res;
	char ch='y';
	system("cls");
	while(ch=='y'||ch=='Y'){
		cout<<"\nEnter item for insertion :";
		cin>>Item;
		res=Push(Stack,top,Item);
		if(res==-1){
			cout<<"OverFlowww!!!!! Abortinggggg!!!!\n";
			exit(1);
		}
		cout<<"\nTHE Stack now is:\n";
		Display(Stack,top);
		cout<<"\n Want to insert more elements?(y/n)...";
		cin>>ch;	
	}
	return 0;
}
