#include<iostream>
using namespace std;
int main(){
	int Ar[50],Item,N,index;
	cout<<"Enter desird array size(max.50)...";
	cin>>N;
	cout<<"\nEnter Array element\n";
	for(int i=0;i<N;++i){
		cin>>Ar[i];
	}
	cout<<"\n Array with doubled elements is as follows..\n";
	for(int i=0;i<N;++i){
		Ar[i]*=2;
		cout<<Ar[i]<<" ";
	}
	cout<<endl;
	return 0;
}
