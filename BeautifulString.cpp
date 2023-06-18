#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int t;
	
	cin>>t;
	while(t--){
		string s;
		
		cin>>s;
		bool check=true;
		int len=s.size();
		for(int i=0;i<len-1;i++){
			if(s[i]!='?'&&s[i]==s[i+1]){
				check=false;
				break;
			}
		}
		if(check){
			for(int i=0;i<len;i++){
				if(s[i]=='?'){
					for(int j='a';j<='c';j++){
						if(j!=s[i-1]&&j!=s[i+1]){
							s[i]=j;
						}
					}
				}
			}
			cout<<s<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}

	return 0;
}

