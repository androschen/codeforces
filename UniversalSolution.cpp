#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t;
	string s;
	
	cin>>t;
	while(t--){	
		cin>>s;
		int R=0,S=0,P=0;
		int len=s.size();
		for(int i=0;i<len;i++){
			if(s[i]=='R') R++;
			else if(s[i]=='S') S++;
			else P++;
		}
		if(R>=S&&R>P){
			for(int i=0;i<len;i++){
				cout<<"P";
			}
		}else if(S>R&&S>=P){
			for(int i=0;i<len;i++){
				cout<<"R";
			}
		}else if(P>=R&&P>S){
			for(int i=0;i<len;i++){
				cout<<"S";
			}
		}else{
			cout<<s;
		}
		cout<<"\n";
	}

	return 0;
}

