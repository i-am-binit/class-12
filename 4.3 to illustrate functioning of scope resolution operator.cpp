#include<iostream>
using namespace std;
int a=10;
int main(){
	int a =15;
	cout<<"MAin()"<<"\n";
	cout<<"a="<<a<<"\n";
	cout<<"::a="<<::a<<"\n";
	{
		int a=25;
		cout<<"Inner Block\n";
		cout<<"a="<<a<<"\n";
		cout<<"::a"<<::a<<"\n";
		
	}
	cout<<"Back to main()"<<"\n";
	cout<<"a="<<a<<"\n";
	cout<<"::a"<<::a<<"\n";
	return 0;
}

