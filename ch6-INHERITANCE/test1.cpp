#include<iostream>
using namespace std;
class Super{
	     int a,b;
	    public:
	    	Super(int a,int b){
	    		a=a;
	    		b=b;
			}
			void disp(){
				cout<<"A = "<<a<<endl;
				cout<<"B = "<<b;
			}
};
class Sub:  Super{
	  public:
	  	Sub(int x,int y){
	  		a=x;
	  		b=y;
		  }
	  		
		  
	
};
int main(){
//	Super obj1(10,20);
	Sub obj2(10,90);
	obj2.disp();
	return 0;
}

