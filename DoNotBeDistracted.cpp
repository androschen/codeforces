#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		bool check=true;
		int cnt[27]={};
		for(int i=0;i<s.size()-1;i++){
			if(cnt[s[i]-'A']==1){
				check=false;
				break;
			}
			cnt[s[i]-'A']=1;
			while(s[i]==s[i+1]){
				i++;
			}
			if(i==s.size()-2&&s[i]!=s[s.size()-1]&&cnt[s[s.size()-1]-'A']==1){
				check=false;
			}
		}

		if(check){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

