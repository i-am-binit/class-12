#include<iostream>
using namespace std;
class Sample{	int x;
			public:
				Sample(int i)
				{x=i;
				cout<<"Constructing Object with"<<i<<"\n";
				}
				~Sample()
					{cout<<"Destroying Object having"<<x<<"\n";}
					void put_x(int i)
					{x=i;}
					int get_x(void)
					{return x;}
};
void afunc(Sample S1)
	{S1.put_x(2);
	 cout<<"This is the x local to afunc()\n";
	 cout<<"x="<<S1.get_x()<<"\n";
	}
	int main()
	{Sample S(1);
	 cout<<"This is the x local in main()\n";
	 cout<<"x="<<S.get_x()<<"\n";
	 afunc(S);
	 cout<<"Back in main()\n";
	 cout<<"x="<<S.get_x()<<"\n";
	 return 0;
	}
