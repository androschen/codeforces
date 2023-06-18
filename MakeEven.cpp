#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string n;
	
	cin>>n;
	if((n[n.size()-1]-'0')%2==0){
		cout<<0<<"\n";
	}else if((n[0]-'0')%2==0){
		cout<<1<<"\n";
	}else{	
		for(int i=0;i<n.size()-1;i++){
			if((n[i]-'0')%2==0){
				cout<<2<<"\n";
				return;
			}
		}
		cout<<-1<<"\n";
	}
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

