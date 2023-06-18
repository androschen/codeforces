#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	string t,s;
	int n,k;
	
	cin>>n>>k;
	cin>>t;
	
	int cnt=1;
	int pos=1;
	string ans=t;
	while(cnt<k){
		if(pos>=ans.size()){
			ans+=t;
			cnt++;
		}else{
			bool check=true;
			int len=0;
			for(int i=0;i<t.size();i++){
				if(pos+i>=ans.size()) break; //check duplicate substring
				len++;
				if(ans[pos+i]!=t[i]) check=false;
			}
			if(check){
				ans+=t.substr(len);
				cout<<ans<<endl;
				cnt++;
			}
		}
		pos++;
	}
	
	cout<<ans<<endl;
	
	
	return 0;
}

