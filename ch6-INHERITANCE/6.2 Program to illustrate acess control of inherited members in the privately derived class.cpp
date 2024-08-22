#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
const int Len=25;
class Employee{
	     private:
	     	char name[Len];
	     	unsigned long enumb;
	     public:
	     	void getdata(){
	     		cout<<"Enter name:";
	     		gets(name);
	     		cout<<"Enter Employee Number :";
	     		cin>>enumb;
			 }
			void putdata(){
			 	cout<<"Name:"<<name<<"\t";
			 	cout<<"Emp.Number:"<<enumb<<"\t";
			 	cout<<"Basic Salary:"<<basic;
			 }
		protected:
		    float basic;
		    void getbasic(){
		    	cout<<"Enter Basic:";
		    	cin>>basic;
			}
};
class Manager : private Employee{
	    private:
	    	char title[Len];
	    public:
	    	void getdata(){
	    		Employee::getdata();
	    		getbasic();
	    		cin.ignore();
	    		cout<<"Enter Title:";
	    		gets(title);
	    		cout<<"\n";
			}
			void putdata(){
				Employee::putdata();
				cout<<"\tTitle:"<<title<<"\n";
			}
};     
int main(){
	system("cls");
	Manager m1,m2;
	cout<<"Manager1\n";
	m1.getdata();
	cout<<"Manager2\n";
	m2.getdata();
	cout<<"\t\tManager1 Details\n";
	m1.putdata();
	cout<<"\t\tManager2 Details\n";
	m2.putdata();
	return 0;
}

