#include<iostream>
#include<stdlib.h>
using namespace std;
class Subject{ int days;
               int subjectno;
            public:
            	Subject(int d=123,int sn=101);
            	void printsub(){
            		cout<<"Subject No:"<<subjectno;
            		cout<<"\n"<<"Dats:"<<days<<"\n";
				}
};
Subject::Subject(int d,int sn){
	cout<<"Constructing Subject\n";
	days=d;
	subjectno=sn;
}
class Student{ int rollno;
               float marks;
               public:Student(){
               	cout<<"Constructiong Student\n";
               	rollno=0;
               	marks=0.0;
			   }
			   void getval(){
			   	cout<<"Enter roll number and marks:";
			   	cin>>rollno>>marks;
			   	cout<<"\n";
			   }
			   void print(){
			   	cout<<"Roll no:"<<rollno;
			   	cout<<"\nMarks:"<<marks<<"\n";
			   }
};
class Admission{ Student stud;
                 Subject sub;
                 float fees;
            public:
            	Admission(){
            		cout<<"Constructing Admission\n";
            		fees=0.0;
				}
				void print(){
					stud.print();
					sub.printsub();
					cout<<"Fees:"<<fees<<"\n";
				}
};
int main(){
	system("cls");
	Admission adm;
	cout<<"\nBack in main()\n";
	return 0;
}

