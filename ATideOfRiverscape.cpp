#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,p;
	string s;
	
	cin>>n>>p;
	cin>>s;
	int cnt=0;
	for(int i=0;i<n-p;i++){
		if(s[i+p]==s[i]&&s[i]!='.'){
			cnt++;
		}
	}
	if(cnt==n-p){
		cout<<"No"<<endl;
	}else{
		for(int i=0;i<n;i++){
			if(s[i]=='.'&&s[i+p]=='1'||s[i]=='.'&&s[i-p]=='1'){
				s[i]='0';
			}else if(s[i]=='.'&&s[i+p]=='0'||s[i]=='.'&&s[i-p]=='0'){
				s[i]='1';
			}else if(s[i]=='.'){
				s[i]='0';
			}
		}
		cout<<s<<endl;	
	}

	return 0;
}

