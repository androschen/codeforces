#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string s,b;
	char a;
	
	cin>>s;
	
	a=s[0];
	for(int i=1;i<s.size();i++){
		if(s[i]<a){
			a=s[i];
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]==a){
			s.erase(s.begin()+i);
			break;
		}
	}
	cout<<a<<" "<<s<<"\n";
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

