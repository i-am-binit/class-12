#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct Employee{
	int empno;
	char name[26];
	float basic;
	float experience;
};
void display(Employee *emp);
void increase(Employee *emp);
int main(){
	Employee mgr,*eptr;
	cout<<"Enter employee number:";
	cin>>mgr.empno;
	cout<<"Enter name:";
	cin.ignore();
	gets(mgr.name);
	cout<<"Enter basic pay:";
	cin>>mgr.basic;
	cout<<"Enter experience (in years):";
	cin>>mgr.experience;
	eptr=&mgr;
	cout<<"\nEmployee Details before increase()\n";
	display(eptr);
	increase(eptr);
	cout<<"\nEmployee Details after increase()\n";
	display(eptr);
	return 0;
}
void display(Employee *emp){
	int len=strlen(emp->name);
	cout<<"Employee nnumber :"<<(emp->name,len);
	cout<<"\tBasic:"<<emp->basic;
	cout<<"\tExperience:"<<emp->experience<<" years\n";
}
void increase(Employee *emp){
	if(emp->experience>=10){
		emp-> basic+=200;
	}
}
