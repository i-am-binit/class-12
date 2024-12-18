#include<iostream>
using namespace std;
int Bsearch(int[],int,int);
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
	index=Bsearch(Ar,N,Item);
	if(index==-1){
		cout<<"\nSorry!! given element could not be found.\n";
	}
	else
	  cout<<"\nElemnt found at index:"<<index<<",Position:"<<index+1<<endl;
	return 0;
}
int Bsearch(int Ar[],int size,int item){
	int beg,last,mid;
	beg=0;
	last=size-1;
	while(beg<=last){
		mid=(beg+last)/2;
		if(item==Ar[mid])
		   return mid;
		else if(item>Ar[mid])
		   beg=mid+1;
		else
		  last=mid-1;
}
return -1;
}
