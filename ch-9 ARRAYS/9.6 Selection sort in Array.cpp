#include<iostream>
using namespace std;
void Selsort(int [],int);
int main(){
	int Ar[50],Item,N,index;
	cout<<"Enter desird array size(max.50)...";
	cin>>N;
	cout<<"\nEnter Array element\n";
	for(int i=0;i<N;++i){
		cin>>Ar[i];
	}
	Selsort(Ar,N);
	cout<<"\n\nThe sorted array is as shown below..\n";
	for(int i=0;i<N;++i){
		cout<<Ar[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
void Selsort(int Ar[],int size){
	int small,pos,tmp;
	for(int i=0;i<size-1;++i){
		small=Ar[i];
		pos=i;
		for(int j=i+1;j<size;++j){
			if(Ar[j]<small){
				small=Ar[j];
				pos=j;
			}
		}
		tmp=Ar[i];
		Ar[i]=Ar[pos];
		Ar[pos]=tmp;
		cout<<"\nArray after pass-"<<i+1<<"-is:";
		for(int j=0;j<size;++j){
			cout<<Ar[j]<<" ";
		}
	}
}
