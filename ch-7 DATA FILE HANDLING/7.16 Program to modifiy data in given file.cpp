#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
	  	cout<<name<<",rollno"<<rollno<<" has "<<marks
		  <<"%marks and "<<grade<<" grade.\n";
	  }
	  int getrno(){
	  	return rollno;
	  }
	  void modify();
}s1,stud;
void Stu::modify(){
	cout<<"Rollno:"<<rollno<<endl;
	cout<<"Name:"<<name<<"\tClass:"<<Class
	    <<"\tMarks:"<<marks<<endl;
	cout<<"Enter new details.\n";
	char nm[20]=" ",Cl[4]=" ";
	float mks;
	cout<<"New Name:(Enter '.'' to retain old one)";
	cin>>nm;
	cout<<"New class:(press '.' to retain old one):";
	cin>>Cl;
	cout<<"New Marks:(press-1 to retain old one)";
	cin>>mks;
	if(strcmp(nm,".")!=0){
		strcpy(name,nm);
	}
	if(strcmp(Cl,".")!=0){
		strcpy(Class,Cl);
	}
	if(mks!=-1){
		marks=mks;
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
}
int main(){
	fstream fio("stu.txt",ios::in|ios::out|ios::binary);
	int rno;
	long pos;
	char found='f';
	cout<<"Enter roll no of student whose record is to be modified\n";
	cin>>rno;
	while(!fio.eof()){
		pos=fio.tellg();
		fio.read((char*)&s1,sizeof(s1));
		if(s1.getrno()==rno){
			s1.modify();
			fio.seekg(pos);
			fio.write((char*)&s1,sizeof(s1));
			found='t';
			break;
	}
}
	if(found=='f'){
		cout<<"Record not found!!\n";
	}
	fio.seekg(0);
	cout<<"Now the file contain\n";
	while(!fio.eof()){
		fio.read((char*)&stud,sizeof(stud));
		stud.putdata();
	}
	fio.close();
	return 0;
}
