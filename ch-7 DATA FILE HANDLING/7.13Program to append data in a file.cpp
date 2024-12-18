#include<iostream>
#include<fstream>
using namespace std;
class Stu{
	   int rollno;
	   char name[25];
	   char Class[4];
	   float marks;
	   char grade;
	public:
	  void getdata(){
  		cout<<"Rollno:";
  		cin>>rollno;
  		cout<<"Name:";
  		cin>>name;
  		cout<<"Class:";
  		cin>>Class;
  		cout<<"Marks:";
  		cin>>marks;
  		if(marks>=75){
  			grade='A';
		  }
		else if(marks>=60){
			grade='B';
		}
		else if(marks>=50){
			grade='C';
		}
		else if(marks>=40){
			grade='D';
		}
		else grade='F';
	  }
	  void putdata(){
	  	cout<<name<<",rollno"<<rollno<<" has "<<marks<<"%marks and "<<grade<<" grade.\n";
	  }
	  int getrno(){
	  	return rollno;
	  }
}s1;
int main(){
	ofstream fo("stu.txt,ios::app|ios::binary");
	char ans='y';
	while(ans=='y'){
		s1.getdata();
		fo.write((char*)&s1,sizeof(s1));
		cout<<"Record added to file.\n";
		cout<<"Want to enter more records?(y/n)..";
		cin>>ans;
	}
	fo.clear();
	return 0;
}

