#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string s,type;
	
	cin>>s>>type;
	int alpha[28]={};
	for(int i=0;i<s.size();i++){
		alpha[s[i]-'a']=i+1;
	}
	int sum=0;
	for(int i=0;i<type.size()-1;i++){
		sum+=abs(alpha[type[i]-'a']-alpha[type[i+1]-'a']);
	}
	cout<<sum<<"\n";
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

