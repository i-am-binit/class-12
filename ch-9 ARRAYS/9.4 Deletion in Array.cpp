#include<iostream>
#include<process.h>
using namespace std;
int Lsearch(int Ar[],int size,int item){
	for(int i=0;i<size;++i){
		if(Ar[i]==item)
		   return i;
	}
	return -1;
}
int main(){
	int Ar[50],Item,N,index;
	cout<<"Enter desird array size(max.50)...";
	cin>>N;
	cout<<"\nEnter Array element\n";
	for(int i=0;i<N;++i){
		cin>>Ar[i];
	}
	char ch='y';
	while(ch=='y'||ch=='Y'){
		cout<<"\nEnter Element to be delete...";
		cin>>Item;
		if(N==0){
			cout<<"Underflow!!\n";
			exit(1);
		}
		index=Lsearch(Ar,N,Item);
		if(index!=-1)
		 Ar[index]=0;
		else
		   cout<<"Sorry!! No such element in the array.\n";
		cout<<"\nThe arraynow is as shown below...\n";
		cout<<"Zero(0) signifies deleted element\n";
		for(int i=0;i<N;++i){
		    cout<<Ar[i]<<" ";
		}
		cout<<endl;
		cout<<"After this emptied space will be shifted to the end of array\n";
		for(int i=index;i<N;++i){
			Ar[i]=Ar[i+1];
		}
		N-=1;
		cout<<"\nWant to delete more elements?(y/n)...";
		cin>>ch;
	}
	cout<<"The array after shifting ALLemptied spacestowards right is..\n";
	for(int i=0;i<N;++i){
		cout<<Ar[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
