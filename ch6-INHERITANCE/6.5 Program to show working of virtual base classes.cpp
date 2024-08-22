#include<iostream>
#include<stdlib.h>
using namespace std;
class Base{
	    public:
	    	int a;
};
class D1:virtual public Base{
	    public:
	    	int b;
};
class D2:virtual public Base{
	    public:
	    	int c;
};
class D3:public D1,public D2{
	    public:
	    	int total;
};
int main(){
	system("cls");
	D3 ob;
	ob.a=100;
	ob.b=40;
	ob.c=3;
	ob.total=ob.a+ob.b+ob.c;
	cout<<ob.a<<"\t"<<ob.b<<"\t"<<ob.c<<"\t"<<ob.total<<endl;
	return 0;
}
