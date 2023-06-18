#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

map<int,int>m;

void solve(){
	int n,q,a;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		m[a]++;
	}
	int sq=0,rec=0;
	for(auto x: m){
		sq+=x.second/4;
		rec+=x.second/2;
	}
	rec-=sq*2;
	cin>>q;
	char sym;
	int plank;
	while(q--){
		cin>>sym>>plank;
		if(sym=='-'){
			m[plank]--;
			if(m[plank]%4==3&&m[plank]>=3){
				sq--;
				rec++;
			}else if(m[plank]%2==1&&m[plank]>=1){
				rec--;
			}
		}else{
			m[plank]++;
			if(m[plank]%4==0&&m[plank]>=4){
				sq++;
				rec--;
			}else if(m[plank]%2==0&&m[plank]>=2){
				rec++;
			}
		}
//		cout<<sq<<" "<<rec<<"q\n";
//		cout<<m[plank];
		if((sq>=1&&rec>=2)||sq>=2){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
//    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

