#include<iostream>
using namespace std;
class X{
	      int codeno;
	      float price;
	      static int count;
	 public:
	 	void getval(int i,float j){
	 		codeno=i;
	 		price=j;
	 		++count;
		 }
	 void display(){
		 	cout<<"Code no:"<<codeno<<"\t";
		 	cout<<"Price:"<<price<<"\n";
		 }
		 static void dispcount(){
		 	cout<<"count="<<count<<"\n";
		 }
};
int X::count=0;
int main(){
	X Ob1,Ob2;
	Ob1.getval(101,25.12);
	Ob2.getval(102,38.19);
	X::dispcount();
	X Ob3;
	Ob3.getval(103,49.00);
	X::dispcount();
	Ob1.display();
	Ob2.display();
	Ob3.display();
	return 0;
	}
	

