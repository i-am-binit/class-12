#include<iostream>
#define Max 100
using namespace std;
int main(){
	int isprime[Max+1];
	int N;
	cout<<"Enter N(<=100):";
	cin>>N;
	for(int i=2;i<=N;++i){
		isprime[i]=1;
	}
	for(int i=2;i*i<=N;++i){
		if(isprime[i]==1){
			for(int j=i;i*j<=N;++j)
			    isprime[i*j]=0;
		}
	}
    int gap;
    int bgap;
    int right=0;
    for(int i=2;i<=N;++i){
    	if(isprime[i])
    	  gap=0;
    	else 
    	  gap++;
    	  if(gap>bgap){
    	  	bgap=gap;
    	  	right=i;
		  }
	}
	int left=right-bgap+1;
	cout<<"There are no primes between "<<left<<" and"<<right<<endl;
	cout<<"That is "<<bgap<<" consecutive integers."<<endl;
	return 0;
}
