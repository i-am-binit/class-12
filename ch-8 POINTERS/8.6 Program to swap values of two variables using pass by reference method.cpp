#include<iostream>
using namespace std;
int main(){
	void swap(int &,int &);
	int a=7,b=4;
	cout<<"a=Original values\n";
	cout<<"a="<<a<<",b="<<b<<endl;
	swap(a,b);
	cout<<"Swapped values \n";
	cout<<"a="<<a<<",b="<<b<<endl;
	return 0;
}
void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
