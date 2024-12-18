#include<iostream>
const int array_size=10;
using namespace std;
int main(){
	int number[array_size]={23,54,67,34,86,87,45,3,5,66};
	int i,j,tmp;
	cout<<"Originally array is:\n";
	for(int i=0;i<array_size;++i)
	    cout<<number[i]<<",";
	cout<<":::\n";
	for(int i=(array_size-1);i>=0;--i){
		for(int j=1;j<=i;++j){
			if(number[j-1]%10>number[j]%10){
				tmp=number[j-1];
				number[j-1]=number[j];
				number[j]=tmp;
			}
		}
	}
	cout<<"Arry after sorting on the basis of Ones's digit, is:\n";
	for(int i=0;i<array_size;++i)
	    cout<<number[i]<<",";
	cout<<":::\n";
	return 0;
	}

