#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll a,s;
	
	cin>>a>>s;
	
	ll temps=s,tempa=a;
	ll digit=0;
	ll cntz=0;
	while(temps%10==tempa%10){
		cntz++;
		temps/=10,tempa/=10;
	}
	
	while(s>0){
		ll lastA=a%10;
		ll lastS=s%10;
//		cout<<"LASTA"<<lastA<<" LastS"<<lastS<<"\n";
		if(lastA>lastS){
			s/=10;
			ll lstS=(s%10)*10+lastS;
			if((lstS-lastA)>10||(lstS-lastA)<0){
				cout<<-1<<"\n";
				return;
			}
			digit+=(lstS-lastA);
		}else{
			digit+=(lastS-lastA);
		}
		s/=10;
		a/=10;
		
		if(a>0&&s<=0){
			cout<<-1<<"\n";
			return;
		}
		if(s==0) break;
		digit*=10;
	}
	
	ll dg=0;
	while(digit>0){
		ll ld=digit%10;
		dg+=ld;
		
		dg*=10;
		digit/=10;
	}
	dg/=10;
	dg*=pow(10,cntz);
	cout<<dg<<"\n";
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

