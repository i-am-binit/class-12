#include<iostream>
#include<stdio.h>
using namespace std;
class ITEM{
			int itemcode[50];
			float it_pric[50];
	    public:
	    	void intialize(void);
	    	float largest(void);
	    	float sum(void);
	    	void display_items(void);	    	
};
void ITEM::intialize(void){
	for(int i=0;i<5;++i){
		cout<<"\nItem no:"<<(i+1);
		cout<<"\nenter Item code:";
		cin>>itemcode[i];
		cout<<"\nEnteritem price:";
		cin>>it_pric[i];
		cout<<"\n";
	}
}
float ITEM::largest(void){
	float large=it_pric[0];
	for(int i=1;i<5;++i){
		if(large<it_pric[i])
		large=it_pric[i];
	}
	return large;
}
float ITEM::sum(void){
	float sum=0;
	for(int i=0;i<5;++i){
		sum+=it_pric[i];
	}
		return sum;
}
void ITEM::display_items(void){
	cout<<"\nCode Price\n";
	for(int i=0;i<5;++i){
		cout<<"\n"<<itemcode[i];
		cout<<"  "<<it_pric[i];
	}
	cout<<"\n";
}
int main(){
	ITEM order;
	order.intialize();
	float total,biggest;
	int ch=0;
	system("cls");
	do{
		cout<<"\nMain Menu.\n";
		cout<<"\n1.Display largest Price.";
		cout<<"\n2.Display sum of prices.";
		cout<<"\n3.Display item list.";
		cout<<"\n4.For exit.";
		cout<<"\nENter your choice(1-4):";
		cin>>ch;
		switch(ch){
			case 1:biggest=order.largest();
				   cout<<"THe largest price is "<<biggest<<"\n";
				   break;
		    case 2:total=order.sum();
		          cout<<"The sum of price is "<<total<<"\n";
		          break;
		    case 3:order.display_items();
		          break;
		    case 4:cout<<"Ok bye";
			      break;
		    default:cout<<"\nWrong choicee!!!";
		          break;		        
		}
	}while(ch>=1&&ch<=3);
	return 0;
}

