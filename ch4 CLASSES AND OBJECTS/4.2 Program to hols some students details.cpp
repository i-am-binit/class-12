#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Student{
	private:
		 int rollno;
		 char name[25];
		 float marks;
		 char grade;
		 
	public:
		void readstudent(){
			cout<<"\nEnter roll no:";
			cin>>rollno;
			cin.ignore();
			cout<<"\nEnter name: ";
			gets(name);
			cout<<"Enter marks:";
			cin>>marks;
		}
		
		void display(){
			calcGrade();
			cout<<"Roll no:"<<rollno<<"\n";
			cout<<"Name:";
			puts(name);
			cout<<"Marks:"<<marks<<"\n";
			cout<<"Grade:"<<grade<<"\n";
		}
		int getRollno(){
			return rollno;
		}
		float getMarks(){
			return marks;
		}
		void calcGrade(){
			if(marks>=75)
			  grade='O';
			else if(marks>=60)
			  grade='A';
			else if(marks>=50)
			  grade='B';
			else if(marks>=40)
			  grade='C';
			else
			  grade='F';
		}
};
 int main(){
 	Student XIIa[3];
 	for(int i=0;i<3;++i){
 		cout<<"\nEnter details of Student "<<i+1<<":";
 		XIIa[i].readstudent();
	 }
	 int choice,rno,pos = -1,highmarks = 0;
	 	char ch;

	 do{
	 	system("cls");
	 	cout<<"\n\nMAin Menu\n";
	 	cout<<"1.Specific student\n";
	 	cout<<"2.Topper\n";
	 	cout<<"3.Exit\n";
	 	cout<<"\nEnter your choice(1-3):";
	 	cin>>choice;
	 	
	switch(choice){
		case 1:{
				cout<<"\nEnter roll no of the student whose details you want to see:";
		       // cout<<"hi";
				cin>>rno;
		        
		        int i;
		        for( i=0;i<3;++i){
		        	if(XIIa[i].getRollno()==rno){
		        		XIIa[i].display();
		        	    break;
					}
				}
				if(i==3)
				 cout<<"\nInvalid Roll no!!!\n";
			
			break;
		} 
		case 2:{
				for(int i=0;i<3;++i){
			    if(XIIa[i].getMarks()>highmarks){
				pos=i;
				highmarks=XIIa[i].getMarks();
				}
			}
			XIIa[pos].display();
			
			break;
		} 
		        
		case 3:break;
		
		deafault:cout<<"\nWrong CHoice !!\n";
		break;
		
	}
	cout<<"do you want more details(y/n):";
	cin>>ch;
}while(ch=='y');
return 0;
 }

