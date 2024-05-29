#include<iostream>
using namespace std;
class Item {
	     int itemno;
	     float price;
	public:
		void getdata(int i,float j){
			itemno=i;
			price=j;
		}
		void putdata(){
			cout<<"Itemno:"<<itemno<<"\t";
			cout<<"Price:"<<price<<"\n";
		}
};
const int size=10;
Item order[size];
int main(){
	int ino;
	float cost;
	for(int a=0;a<size;++a){
		cout<<"Enter item no & price for item"<<a+1<<"\n";
		cin>>ino>>cost;
		order[a].getdata(ino,cost);
	}
	for(int a=0;a<size;++a){
		cout<<"Item"<<a+1<<"\n";
		order[a].putdata();
	}
	return 0;
}

