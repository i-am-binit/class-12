#include<iostream>                                                                                                                                                                                                                                                 
using namespace std;
int main(){
	int Ar[15]={22,31,12,44,5,173,45,67,45,76,98,12,234,354,99};
	int r;
	cout<<"\nEnter rotation factor(ie rotate by?):";
	cin>>r;
	cout<<"Original array is:\n";
	for(int i=0;i<15;++i){
		cout<<Ar[i]<<",";
	}
	cout<<":::\n";
	int tmp[15];
	for(i=14;i>=0;--i){
		if((i+r)>=15)
		  tmp[i+r-15]=Ar[i];
		else
		 tmp[i+r]=Ar[i];
	}
	cout<<"Array after Rotation by factor "<<r<<" is:\n";
	for(int i=0;i<15;++i){
		Ar[i]=tmp[i];
		cout<<Ar[i]<<",";
	}
	cout<<":::\n";
}
