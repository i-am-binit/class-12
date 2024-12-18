#include<iostream>
using namespace std;
void Bubblesort(int Ar[],int size){
	int tmp,ctr=0;
	for(int i=0;i<size;++i){
		for(int j=0;j<(size-1)-i;++j){
			if(Ar[j]>Ar[j+1]){
				tmp=Ar[j];
				Ar[j]=Ar[j+1];
				Ar[j+1]=tmp;
			}
		}
		cout<<"Array after iteraion-"<<++ctr<<"-is:";
		for(int k=0;k<size;++k){
			cout<<Ar[k]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int Ar[50],Item,N,index;
	cout<<"Enter desird array size(max.50)...";
	cin>>N;
	cout<<"\nEnter Array element\n";
	for(int i=0;i<N;++i){
		cin>>Ar[i];
	}
	Bubblesort(Ar,N);
	cout<<"\n\nThe Sorted array is as shown below..\n";
	for(int i=0;i<N;++i){
		cout<<Ar[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
