#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

bool isPrime(int a){
	for(int i=2;i*i<=a;i++){
		if(a%i==0) return false;
	}
	return true;
}

void solve(){
	
	int cnt=0;
	for(int i=2;i<=50;i++){
		int loop=0;
		if(isPrime(i)){
			for(int j=i;j<=50;j*=i){
				if(loop==2) break;
				loop++;
				cout<<j<<"\n";
				string s;
				cin>>s;
				if(s=="yes") cnt++;
				
			}
			
		}
	}
	if(cnt>1){
		cout<<"composite\n";
	}else{
		cout<<"prime\n";
	}
}


int main(){
	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    
    int t=1;
//    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

