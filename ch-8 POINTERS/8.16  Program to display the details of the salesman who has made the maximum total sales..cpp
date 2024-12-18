#include<iostream>
#include<string.h>
using namespace std;
class Salesman{
	         char name[11];
	         float q1_sal,q2_sal,q3_sal,q4_sal,tot_sal;
	      public:
	      	Salesman(){
	      		strcpy(name," ");
	      		q1_sal=q2_sal=q3_sal=q4_sal=tot_sal=0;
			  }
			void getdata(char *s,float i,float j,float k,float l){
				strcpy(name,s);
				q1_sal=i;
				q2_sal=j;
				q3_sal=k;
				q4_sal=l;
			}
			void calc_tot(){
				tot_sal=q1_sal+q2_sal+q3_sal+q4_sal;
			}
			char *get_name(){
				return name;
			}
			float get_q1(){
				return q1_sal;
			}
			float get_q2(){
				return q2_sal;
			}
			float get_q3(){
				return q3_sal;
			}
			float get_q4(){
				return q4_sal;
			}
			float get_tot(){
				return tot_sal;
			}
			Salesman *max_sal(Salesman *S){
				if(!S){
					S=this;
				}
				else{
					float f1,f2;
					f1=S->get_tot();
					f2=this->get_tot();
					if(f1<f2){
						S=this;
					}
				}
					return S;
			}
};
Salesman *sp;
void printit(Salesman *sp){
	cout<<"\nSalesman with Maximum Sales\n";
	cout<<"Name:";
	char *ss=sp->get_name();
	cout.write(ss,11).put('\n');
	cout<<"Total Sales:"<<sp->get_tot()<<endl;
}
int main(){
	Salesman Binit,Priyanshu,Juwaraj,Ripunjoy,Jyotirmoy;
	float q1,q2,q3,q4;
	sp=&Binit;
	cout<<"Enter sales in four quaters for Binit\n";
	cin>>q1>>q2>>q3>>q4;
	Binit.getdata("Binit",q1,q2,q3,q4);
	Binit.calc_tot();
	sp=Binit.max_sal(sp);
	
	cout<<"Enter sales in four quaters for Priyanshu\n";
	cin>>q1>>q2>>q3>>q4;
	Priyanshu.getdata("Priyanshu",q1,q2,q3,q4);
	Priyanshu.calc_tot();
	sp=Priyanshu.max_sal(sp);
	
	cout<<"Enter sales in four quaters for Juwaraj\n";
	cin>>q1>>q2>>q3>>q4;
	Juwaraj.getdata("Juwaraj",q1,q2,q3,q4);
	Juwaraj.calc_tot();
	sp=Juwaraj.max_sal(sp);
	
	cout<<"Enter sales in four quaters for Ripunjoy\n";
	cin>>q1>>q2>>q3>>q4;
	Ripunjoy.getdata("Ripunjoy",q1,q2,q3,q4);
	Ripunjoy.calc_tot();
	sp=Ripunjoy.max_sal(sp);
	
	cout<<"Enter sales in four quaters for Jyotirmoy\n";
	cin>>q1>>q2>>q3>>q4;
	Jyotirmoy.getdata("Jyotirmoy",q1,q2,q3,q4);
	Jyotirmoy.calc_tot();
	sp=Jyotirmoy.max_sal(sp);
	
	printit(sp);
	return 0;
}
