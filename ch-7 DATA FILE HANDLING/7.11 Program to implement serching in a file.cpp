#include<iostream>
#include<fstream>
using namespace std;
struct stu{
	int rollno;
	char name[25];
	char Class[4];
	float marks;
	char grade;
}S1;
int main(){
	int rn;
	char found='n';
	ifstream fin("Stu.txt",ios::in);
	cout<<"Enter rollno to be searched for :";
	cin>>rn;
	while(!fin.eof()){
		fin.read((char*)&S1,sizeof(S1));
		if(S1.rollno==rn){
			cout<<S1.name<<",rollno"<<rn<<" has "<<S1.marks<<"%marks and "<<S1.grade<<" grade.\n";
			found='y';
			break;
		}
	}
	if(found=='n'){
	cout<<"Roll no not found in file!!\n";
}
fin.close();
return 0;
}

