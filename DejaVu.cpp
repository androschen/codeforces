#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t;
	
	cin>>t;
	while(t--){
		string s,pal;
		cin>>s;
		int alpa[27]={};
		int len=s.size();
		for(int i=len-1;i>=0;i--){
			alpa[s[i]-'a']++;
		}
		if(alpa[0]==len){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
			s+='a';
			for(int i=len;i>=0;i--){
				pal+=s[i];
			}
			if(s!=pal){
				cout<<s<<endl;
			}else{
				cout<<"a";
				for(int i=0;i<len;i++){
					cout<<s[i];
				}
				cout<<"\n";
			}
		}
	}

	return 0;
}

