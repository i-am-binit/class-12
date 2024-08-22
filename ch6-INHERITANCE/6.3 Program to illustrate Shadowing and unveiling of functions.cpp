#include<iostream>
using namespace std;
class A{  int a;
          char b;
        public:
        	void f1(){
        		cout<<"Inside Base class\'s f1()"<<endl;
			}
			int f2(char ch){
				cout<<"Inside Base class\'s f2()"<<endl;
			}
			void f3(){
        		cout<<"In f3()-Defined in base class"<<endl;
			}
};
class B:public A{
	        int c;
	    public:
	    	using A::f1;
	    	using A::f2;
	    	void f1(double d){
	    		cout<<"Inside DERIVED class\'s f1() with passed value "<<d<<endl;
			}
		int f2(char ch){
			cout<<"Inside DERIVED class\'s f2()"<<endl;
		}
};
int main(){
	B obj1;
	int a=obj1.f2('k');
	obj1.f3();
	obj1.f1();
	obj1.f1(9.3);
	return 0;
}
