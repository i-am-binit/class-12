#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Student{
	char name[40];
	char grade;
	float marks;
  public:
  	void getdata();
  	void display();
};
void Student::display(){
	cout<<"Name:"<<name<<"\t"
	    <<"Garde:"<<grade<<"\t"
	    <<"Marks:"<<marks<<"\t\n";

}
void Student::getdata(){
	char ch;
	cin.get(ch);
	cout<<"Enter name:";
	cin.getline(name,40);
	cout<<"Enter grade:";
	cin>>grade;
	cout<<"Enter marks:";
	cin>>marks;
	cout<<endl;
}
int main(){
	system("cls");
	Student arts[3];
	fstream filin;
	filin.open("Stu.txt",ios::in|ios::out);
	if(!filin){
		cout<<"Cannot open file!!\n";
		return 1;
	}
	cout<<"Enter details for 3 students\n";
	for(int i=0;i<3;++i){
		arts[i].getdata();
		filin.write((char*)&arts[i],sizeof(arts[i]));
	}
	filin.seekg(0);
	cout<<"The contents of stu.txt are shown below.\n";
	for(int i=0;i<3;++i){
		filin.read((char*)&arts[i],sizeof(arts[i]));
		arts[i].display();
	}
	filin.clear();
	return 0;
}


