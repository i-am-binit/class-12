#include<iostream>
#include<process.h>
using namespace std;
struct Node{
	   int info;
	   Node *next;
} *start,*newptr,*save,*ptr;
Node *Create_new_nodes(int n){
	ptr = new Node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}
void Insert_Beg(Node* np){
	if(start==NULL)
	    start=np;
	else{
		save=start;
		start=np;
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
	start=NULL;
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y'){
		system("cls");
		cout<<"\nEnter infromation for the new node..";
		cin>>inf;
		cout<<"\nCreating new node!! Please enter to continue..";
		system("pause");
	    newptr=Create_new_nodes(inf);
		if(newptr!=NULL){
			cout<<"\n\n New NOde created Successfully.Press Enter to continue..";
			system("pause");
		}
		else{
			cout<<"\nCannot create new node!! Aborting!!\n";
			exit(1);
		}
		cout<<"\n\nNow inserting this node in the beginning of list..\n";
		cout<<"Press enter to continue..\n";
		system("pause");
		Insert_Beg(newptr);
		cout<<"\nNow the list is:\n";
		Display(start);
		cout<<"\nPress Y to enter more nodes,Nto exit..\n";
		cin>>ch;
	}
	return 0;
}
