#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	
	cin>>t;
	while(t--){
		string s;
		vector<char>ss;
		cin>>s;
		int len=s.size();
		bool check=false;
		for(int i=0;i<len;i++){
			if(s[i]=='1') break;
			if(i==len-1) check=true;
		}
		for(int i=0;i<len;i++){
			if(s[i]=='0') break;
			if(i==len-1) check=true;
		}
	
		if(!check){
			ss.push_back(s[0]);
			for(int i=1;i<len;i++){	
				ss.push_back(s[i]);
				if(s[i]!=s[i-1]){
					ss.pop_back();
					continue;
				}
			}
		}
		ss.push_back(s[len-1]);
		for(int i=0;i<sizeof(ss);i++){
			cout<<ss[i]<<" ";
		}
		if(check){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

