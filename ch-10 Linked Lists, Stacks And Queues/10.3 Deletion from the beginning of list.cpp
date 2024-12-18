#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;
struct Node{
     int info;
     Node *next;
} *start,*newptr,*save,*ptr,*rear;
Node *Create_new_nodes(int n){
	ptr = new Node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}
void Display(Node* np){
	while(np!=NULL){
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"!!!\n";
}
void Insert(Node *np){
	if(start==NULL)
	  start=rear=np;
	  else{
	  	rear->next=np;
	  	rear=np;
	  }
}
void DelNode(){
	if(start==NULL)
	cout<<"UNderFlowwwwww!!!\n";
	else{
		ptr=start;
		start=start->next;
		delete ptr;
	}
}
int main(){
	 	start=rear=NULL;
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y'){
		system("cls");
		cout<<"\nEnter infromation for the new node..";
		cin>>inf;
		newptr=Create_new_nodes(inf);
		if(newptr==NULL){
			cout<<"\nCannot create new node!! Aborting!!\n";
			exit(1);
		}
		Insert(newptr);
		cout<<"\n Press Y to enter more nodes,N to exit..\n";
		cin>>ch;
}
system("cls");
do{
	cout<<"\n THe list now is:\n";
	Display(start);
	system("pause");
	cout<<"Want to delete first node?(y/n)...";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	  DelNode();
}while(ch=='y'||ch=='Y');
return 0;
}
