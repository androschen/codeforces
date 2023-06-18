#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t;
	
	cin>>t;
	while(t--){
		string s;
		
		cin>>s;
		int cnt1=0;
		int cnt0=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='1'){
				cnt1++;	
			}else{
				cnt0++;
			}
		}
		if(cnt1==0||cnt0==0){
			cout<<s<<endl;
		}else{
			if(s[0]=='1'){
				for(int i=0;i<s.size();i++){
					cout<<"10";
				}
			}else{
				for(int i=0;i<s.size();i++){
					cout<<"01";
				}
			}
			cout<<"\n";
		}
	}

	return 0;
}

