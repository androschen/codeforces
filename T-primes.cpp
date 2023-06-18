#include<bits/stdc++.h>

using namespace std;

//function untuk membedakan prime atau tidak
vector<bool> primes(1000007);

void sieve_of_erosthenes(){

	primes[0]=primes[1]=false;
	
	for(int i=2;i<=1000007;i++){
		primes[i]=true;
	}
	//atau
//	memset(primes,true,sizeof(primes));
	
	for(int i=2;i*i<=1000007;i++){
		if(primes[i]==true){
			for(int j=2*i;j<=1000007;j+=i)
			{
				primes[j]=false;
			}
		}
	}
}

int main(){
	int n;

	cin>>n;
	long long int x[n];
	sieve_of_erosthenes();
	for(int i=0;i<n;i++){
		cin>>x[i];
		long long int divisor=sqrt(x[i]); 
		if(x[i]%divisor==0&&divisor*divisor==x[i]&&primes[divisor]){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
