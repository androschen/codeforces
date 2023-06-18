#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	string s;
	
	cin>>n;
	cin>>s;
	ll cntl=0,cntr=0;
	for(int i=0;i<n;i++){
		if(s[i]==s[0]){
			cntl++;
		}else{
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]==s[n-1]){
			cntr++;
		}else{
			break;
		}
	}
	
	if(s[0]==s[n-1]){
		cout<<(cntr+1)*(cntl+1)%998244353<<endl;
	}else{
		cout<<cntl+cntr+1<<endl;
	}

	return 0;
}

