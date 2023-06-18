#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		if(n<10){
			cout<<n<<endl;
		}else if(n<=110){
			if(n==110){
				cout<<18<<endl;
			}else{
				cout<<n/11+9<<endl;
			}
		}else{
			int divisor=111;
			int sum=0;
			int lop=0;
			for(int i=0;i<7;i++){
				if(divisor>n) break;
				
				if(n>=divisor&&n/divisor<10){
					sum+=n/divisor;
				}
				if(n/divisor==10&&n<divisor*10+1){
					sum+=9;
				}
				divisor*=10;
				divisor++;
				lop++;
			}
			cout<<sum+18+(lop-1)*9<<endl;
		}
	}

	return 0;
}

