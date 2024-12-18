#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
class String{
	    	char *str;
	    public:
	    	String(char *s){
	    		int len=strlen(s);
	    		str=new char[len+1];
	    		strcpy(str,s);
			}
		~String(){
			delete str;
		}
		void display(){
			cout<<str;
		}
		void upit();
};
void String::upit(){
	char *sp=str;
	while(*sp){
		*sp=toupper(*sp);
		sp++;
	}
}
int main(){
	String S1="Life is a bunch of flowers";
	cout<<"\nOriginal String\n";
	S1.display();
	S1.upit();
	cout<<"\nUppercase String\n";
	S1.display();
	return 0;
}
