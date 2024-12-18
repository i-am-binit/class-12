#include<iostream>
#define Max 100
using namespace std;

int main(){
	int isPrime[Max+1];
	for(int i=2;i<=Max;++i){
		isPrime[i]=1;
	}
	for(int i=2;i*i<=Max;++i){
		if(isPrime[i]==1){
			for(int j=i;i*j<=Max;++j){
				isPrime[i*j]=0;
			}
		}
	}
		cout<<"The prime numbers uptil "<<Max<<"are:\n";
		int primes=0;
		for(int i=2;i<=Max;++i){
			if(isPrime[i]){
				primes++;
				cout<<i<<",";
			}
		}
		cout<<":::\n";
		cout<<"The number of primes <="<<Max<<" is "<<primes<<endl;
		return 0;
	
}
