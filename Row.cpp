#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	string s;
	
	cin>>n;
	cin>>s;
	if(n==1){
		if(s[0]=='1') cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		return 0;
	}
	int i=0;
	while(s[i]!='1'&&i<n) i++;
	
	if(i>1){
		cout<<"No"<<endl;
		return 0;
	}
	while(i<n){
		if(s[i]=='1'&&i<n-1){
			int cnt=0;
			i++;
			while(s[i]=='0'&&i<n){
				i++;
				cnt++;
			}
			if(cnt==0||cnt>2){
				cout<<"No"<<endl;
				return 0;
			}
		}
		if(i==n-1) break;
	}	
	if(s[n-1]=='0'&&s[n-2]=='0') cout<<"No"<<endl;
	else cout<<"Yes"<<endl;

	return 0;
}

