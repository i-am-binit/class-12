#include<iostream>
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
void Insert(Node *np){
	if(start==NULL)
	  start=rear=np;
	  else{
	  	rear->next=np;
	  	rear=np;
	  }
}
void Traverse(Node *np){
	while(np!=NULL){
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"!!!\n";
}
int main(){
	start=rear=NULL;
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y'){
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
	cout<<"\n The List now is:\n";
	Traverse(start);
	system("pause");
	return 0;
}
