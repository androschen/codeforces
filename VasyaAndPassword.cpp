#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int t;
	
	cin>>t;
	while(t--){
		string s;
		
		cin>>s;
		int pass[4]={0};
		for(int i=0;i<s.size();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				pass[0]++;
			}else if(s[i]>='a'&&s[i]<='z'){
				pass[1]++;
			}else{
				pass[2]++;
			}
		}
		bool check=true;
		for(int i=0;i<3;i++){
			if(pass[i]==0){
				check=false;
				break;
			}
		}
		if(check){
			cout<<s<<endl;
		}else{
			int idx0=-1;
			if(pass[0]==0){
				if(pass[1]>1){
					for(int i=0;i<s.size();i++){
						if(s[i]>='a'&&s[i]<='z'){
							s[i]-=32;
							idx0=i;
							break;
						}
					}
				}else if(pass[2]>1){
					for(int i=0;i<s.size();i++){
						if(s[i]>='0'&&s[i]<='9'){
							s[i]='A';
							idx0=i;
							break;
						}
					}
				}
			}
			int idx1=-1; 
			if(pass[1]==0){
				if(pass[0]>1){
					for(int i=0;i<s.size();i++){
						if(s[i]>='A'&&s[i]<='Z'&&i!=idx0){
							s[i]+=32;
							idx1=i;
							break;
						}
					}
				}else if(pass[2]>1){
					for(int i=0;i<s.size();i++&&i!=idx0){
						if(s[i]>='0'&&s[i]<='9'){
							s[i]='a';
							idx1=i;
							break;
						}
					}
				}
			} 
			if(pass[2]==0){
					if(pass[0]>1){
					for(int i=0;i<s.size();i++){
						if(s[i]>='A'&&s[i]<='Z'&&i!=idx0&&i!=idx1){
							s[i]='1';
							break;
						}
					}
				}else if(pass[1]>1){
					for(int i=0;i<s.size();i++){
						if(s[i]>='a'&&s[i]<='z'&&i!=idx0&&i!=idx1){
							s[i]='1';
							break;
						}
					}
				}
			}
		cout<<s<<endl;
		}
	}
	
	return 0;
}

