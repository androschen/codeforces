#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;

	cin>>q;
	while(q--){
		string s,t;
		
		cin>>s;
		cin>>t;
		bool check=false;
		int len=s.size();
		for(int i=0;i<len;i++){
			for(int j=0;j<len;j++){
				if(s[i]==t[j]){
					check=true;
					break;
				}
			}
			if(check) break;
		}
		if(check){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

