#include<iostream>
#include<stdio.h>
using namespace std;
const int LEN=25;
class Person{
	      char name[LEN];
	      int age;
	    public:
	    	void readperson();
	    	void displayperson(){
	    		cout<<"Name:";
	    		cout.write(name,LEN);
	    		cout<<"\tAge:"<<age<<endl;
			}
};
void Person::readperson(){
	for(int i=0;i<LEN;++i){
		name[i]=' ';
	}
	cout<<"Enter name of the person:";
	cin.ignore();
	gets(name);
	cout<<"Enter age:";
	cin>>age;
}
class  Student:public Person{
	int rollno;
	float average;
   public:
   	void readstudent(){
   		readperson();
   		cout<<"Enetr roll no:";
   		cin>>rollno;
   		cout<<" Eneter Average marks:";
   		cin>>average;
	   }
	   void disp_rollno(){
	   	cout<<"Roll no:";
	   	cout<<rollno<<endl;
	   }
	   float getaverage(){
	   	return average;
	   }
};
class GradStudent:public Student{
	char subject[LEN];
	char working;
   public:
   	void readit();
   	void displaysubject(){
   		cout<<"Subject:";
   		cout.write(subject,LEN);
	   }
	   char workingstatus(){
	   	return working;
	   }
};
void GradStudent::readit(){
	readstudent();
	for(int i=0;i<LEN;++i){
		subject[i]=' ';
	}
	cout<<"Enter main subject:";
	gets(subject);
	cout<<"Working?(Y/N):";
	cin>>working;
}
int main(){
	const int size=5;
	GradStudent grad[size];
    int year,num_working=0,non_working=0,div1=0,total=0;
    float topscore=0,score,number,wperc,nwperc;
    cout<<"Enter Year:";
    cin>>year;
    for(int i=0;i<size;++i){
    	cout<<"Enter details for Graduate"<<(i+1)<<endl;
    	grad[i].readit();
    	++total;
    	if((grad[i].workingstatus()=='y')||(grad[i].workingstatus()=='Y')){
    		num_working++;
    	}
    	else{
    		non_working++;
		}
		score=grad[i].getaverage();
		if(score>topscore){
			topscore=score;
			number=i;
		}
		if(score>=60.0){
			div1++;
		}		
}
int i=number;
cout<<"\n\t\tReport for the year "<<year<<"\n";
cout<<"\t\t--------------------\n";
cout<<"Working Graduates:"<<num_working<<endl;
cout<<"\tNon-working Graduates:"<<non_working<<endl;
cout<<"\tDetials of the top scorer\n";
grad[i].displayperson();
grad[i].displaysubject();
nwperc=((float)non_working/(float)total)*100;
wperc=((float)div1/(float)total)*100;
cout<<"\tAverage Marks:"<<grad[i].getaverage()<<endl;
cout<<"\t"<<nwperc<<"% of the graduates thhis year are :"<<non_working<<"and\n"<<wperc<<"% are first divisioners\n";
return 0;
}
