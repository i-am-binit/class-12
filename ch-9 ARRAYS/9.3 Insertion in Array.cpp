#include<iostream>
#include<process.h>
using namespace std;
int Findpos(int[],int,int);
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
		cout<<"\nEnter Element to be inserted...";
		cin>>Item;
		if(N==50){
			cout<<"Overflow!!\n";
			exit(1);
		}
		index=Findpos(Ar,N,Item);
		for(int i=N;i>index;--i){
			Ar[i]=Ar[i-1];
		}
		Ar[index]=Item;
		N+=1;
		cout<<"\nWant to insert more elements?(y/n)..";
		cin>>ch;
	}
	cout<<"The array now is as shown below..\n";
	for(int binit=0;binit<N;++binit)
	  cout<<Ar[binit]<<" ";
	cout<<endl;
	return 0;
}
int Findpos(int Ar[],int size,int item){
	int pos;
	if(item<Ar[0])
	  pos=0;
	else{
		for(int i=0;i<size-1;++i){
			if(Ar[i]<=item&&item<Ar[i+1]){
				pos=i+1;
				break;
			}
			if(i==size-1)
			 pos=size;
		}
		return pos;
	}
}
