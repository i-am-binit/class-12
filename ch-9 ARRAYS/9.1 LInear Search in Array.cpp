#include<iostream>
using namespace std;
int Lsearch(int[],int,int);
int main(){
	int Ar[50],Item,N,index;
	cout<<"Enter desird array size(max.50)...";
	cin>>N;
	cout<<"\nEnter Array element\n";
	for(int i=0;i<N;++i){
		cin>>Ar[i];
	}
	cout<<"\nEnter Element to be searched for...";
	cin>>Item;
	index=Lsearch(Ar,N,Item);
	if(index==-1){
		cout<<"\nSorry!! given element could not be found.\n";
	}
	else
	  cout<<"\nElemnt found at index:"<<index<<"\nPosition:"<<index+1<<endl;
	return 0;
}
int Lsearch(int Ar[],int size,int item){
	for(int i=0;i<size;++i){
		if(Ar[i]==item)
		return i;
	}
	return -1;
}
