#include<iostream>
using namespace std;
class Sample{
	     int x;
	  public:
	  	Sample(int i){
	  		x=1;
	  		cout<<"Constructing Object with "<<i<<endl;
		  }
		~Sample(){
			cout<<"Destroying Object having "<<x<<endl;
		}
		void put_x(int i){
			x=i;
		}
		int get_x(){
			return x;
		}
};
void afunc(Sample &S1){
	S1.put_x(2);
	cout<<"This is x localto afunc()\n";
	cout<<"x= "<<S1.get_x()<<endl;
}
int main(){
	Sample S(1);
	cout<<"This is the x in main()\n";
	cout<<"x= "<<S.get_x()<<endl;
	afunc(S);
	cout<<"Back in main()\n";
	cout<<"x= "<<S.get_x()<<endl;
	return 0;
}
