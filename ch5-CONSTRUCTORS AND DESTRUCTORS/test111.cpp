#include<iostream>
using namespace std;
struct Sname {
	char fname;
	char lname;
}S1;
class Test{
	int a,b;
	const int MAX;
	Sname &name;
	public:
		Test(int i, int j):MAX(300),name(S1){
			a = i;
			b= j;
		}
		
		void disp(){
			cout<<" value of A"<<a;
			cout <<"value of B"<<b;
			cout<<"MAX value is "<<MAX;
			cout<<"First name is"<<name.fname;
			cout<<"Last name is "<<name.lname;
		}
};
int main(){
	
	S1.fname='A';
	S1.lname='C';
	Test Obj(10,20);
	Obj.disp();
}
