#include<iostream>
#include<limits.h>
using namespace std;
void InsSort(int[],int);
int main(){
    int Ar[50],Item,N,index;
	cout<<"Enter desird array size(max.50)...";
	cin>>N;
	cout<<"\nEnter Array element\n";
	for(int i=0;i<N;++i){
		cin>>Ar[i];
	}
	InsSort(Ar,N);
	cout<<"\n\nThe Sorted Array is as shown below..\n";
	for(int i=1;i<=N;++i){
		cout<<Ar[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
void InsSort(int Ar[],int size){
	int tmp,j;
	Ar[0]=INT_MIN;
	for(int i=1;i<=size;++i){
		tmp=Ar[i];
		j=i-1;
		while(tmp<Ar[j]){
			Ar[j+1]=Ar[j];
			j--;
		}
		Ar[j+1]=tmp;
		cout<<"Array after pass-"<<i<<"-is:";
		for(int k=1;k<=size;++k){
			cout<<Ar[k]<<" ";
		}
		cout<<"\n";
			}
}
