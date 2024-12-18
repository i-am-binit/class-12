#include<iostream>
#include<string.h>
using namespace std;
class Salesman{
			char name[26];
			float total_sales;
		public:
			Salesman(char *s,float f){
				strcpy(name," ");
				strcpy(name,s);
				total_sales=f;
			}
			void prnobject(){
				cout.write(this->name,26);
				cout<<" has ivoked prnobject().\n";
			}
};
int main(){
	Salesman Benu("Benu",67777),Jubu("Jubu",45467),Ripu("Ripu",68876);
	Benu.prnobject();
	Jubu.prnobject();
	Ripu.prnobject();
	return 0;
}
