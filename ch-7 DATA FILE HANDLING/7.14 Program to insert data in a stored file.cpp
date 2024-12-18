#include<iostream>
#include<fstream>
#include<stdio.h>
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
}s1,stud;
int main(){
	ifstream fi("stu.txt",ios::in|ios::binary);
	ofstream fo("temp.txt",ios::out|ios::binary);
	char last='y';
	cout<<"Enter details of sudent whose record in to be inserted\n";
	s1.getdata();
	while(!fi.eof()){
		fi.read((char*)&stud,sizeof(stud));
		if(s1.getrno()<=stud.getrno()){
			fo.write((char*)&s1,sizeof(s1));
			last='n';
			break;
		}
		else{
			fo.write((char*)&stud,sizeof(stud));
		}
	}
	if(last=='y'){
		fo.write((char*)&s1,sizeof(s1));
	}
	else if(!fi.eof()){
		while(!fi.eof()){
			fi.read((char*)&stud,sizeof(stud));
			fo.write((char*)&stud,sizeof(stud));
		}
	}
	fi.close();
	fo.close();
	remove("stu.txt");
	rename("temp.txt","stu.txt");
	fi.open("stu.txt",ios::in);
	cout<<"File now contains\n";
	while(!fi.eof()){
		fi.read((char*)&stud,sizeof(stud));
		if(fi.eof()){
			break;
		}
		stud.putdata();
	}
	fi.close();
	return 0;
}

