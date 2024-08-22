#include<iostream>
using namespace std;
 class A{
	      static int  count;
	    public:
	    	A(){
	    		count++;
	    		cout<<"Object"<<count<<"being created\n";
			}
			~A(){
				cout<<"Object"<<count<<"being destroyed\n";
				count--;
			}
};
int A::count=0;
int main(){
	void f1();
	 A obj1,obj2;
	f1();
	{
		A obj3;
	}
	return 0;
}
void f1(){
	A obj4;
}
