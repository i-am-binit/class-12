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
	ifstream fio("stu.txt",ios::in);
	ofstream file("temp.txt",ios::out);
	int rno;
	char found='f',confirm='n';
	cout<<"Enter rollno of student whose record is to be deleted\n";
	cin>>rno;
	while(!fio.eof()){
		fio.read((char*)&s1,sizeof(s1));
		if(s1.getrno()==rno){
			s1.putdata();
			found='t';
			cout<<"Are you sure,you want to delete this record(y/n)..";
			cin>>confirm;
			if(confirm=='n'){
				file.write((char*)&s1,sizeof(s1));
			}
		}
		else{
			file.write((char*)&s1,sizeof(s1));
		}
	}
	if(found=='f'){
		cout<<"Record not found!!\n";
	}
	fio.close();
	file.close();
	remove("stu.txt");
	rename("temp.txt","stu.txt");
	fio.open("stu.txt",ios::in);
	cout<<"Now the file contains\n";
	while(!fio.eof()){
		fio.read((char*)&stud,sizeof(stud));
		if(fio.eof()){
			break;
		}
		stud.putdata();
	}
	fio.close();
	return 0;
}
