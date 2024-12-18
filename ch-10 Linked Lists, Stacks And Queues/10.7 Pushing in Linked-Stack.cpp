#include<iostream>
#include<stdlib.h>;
#include<process.h>;
using namespace std;
struct Node{
	int info;
	Node *next;
}*newptr,*save,*ptr,*top;
Node *Create_new_nodes(int n){
	ptr = new Node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}
void Push(Node* np){
	if(top==NULL)
	  top=np;
	else{
		save=top;
		top=np;
		np->next=save;
	}
}
void Display(Node* np){
	while(np!=NULL){
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"!!!\n";
}
int main(){
	int inf;
	char ch='y';
	top=NULL;
	system("cls");
	while(ch=='y'||ch=='Y'){
		system("cls");
		cout<<"\nEnter infromation for the new node..";
		cin>>inf;
	    newptr=Create_new_nodes(inf);
		if(newptr==NULL){
			cout<<"\nCannot create new node!! Aborting!!\n";
			exit(1);
		}
		Push(newptr);
		cout<<"\nNOw the linked-stack is:\n";
		Display(top);
		cout<<"\nPress Y to enter more nodes,N to exit..\n";
		cin>>ch;
	}
	return 0;
}
