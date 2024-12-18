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
	int rn;
	char found ='n';
	ifstream fi("stu.txt",ios::in);
	cout<<"Enter roll no to be searched for:";
	cin>>rn;
	while(!fi.eof()){
		fi.read((char*)&s1,sizeof(s1));
		if(s1.getrno()==rn){
			s1.putdata();
			found='y';
			break;
		}
	}
	if(found=='n'){
		cout<<"Rollno not found in file!!\n";
	}
	fi.close();
	return 0;
}

