#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	string s,ans;
	
	cin>>n;
	cin>>s;
	
	int cnt=0;
	bool check=false;
	for(int i=0;i<n-1;i++){
		ans="";
		cnt=0;
		check=false;
		for(int j=i;j<i+2;j++){
			if(s[j]!=s[j+1]){
				ans+=s[j];
				ans+=s[j+1];
				check=true;
				break;
			}else{
				break;
			}
		}
		if(check){
			break;	
		}
	}
	if(check){
		cout<<"YES"<<endl;
		cout<<ans<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}

