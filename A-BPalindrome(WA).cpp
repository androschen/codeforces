#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,a,b;
	
	cin>>t;
	while(t--){
		string s,re;
		cin>>a>>b;
		cin>>s;
		int len=a+b;
	
		bool check=true;
		if(s.size()!=len){
			cout<<-1<<endl;
			continue;
		}
		for(int i=len-1;i>=0;i--){
			re+=s[i];
			if(s[i]=='1'){
				b--;
				if(b<0){
					check=false;
					break;
				}
			}else if(s[i]=='0'){
				a--;
				if(a<0){
					check=false;
					break;
				}
			}
		}
		for(int i=0;i<len/2;i++){
			if(s[i]!=re[i]){
				if(s[i]=='?'){
					if(re[i]=='1'){
						if(b<0 ){
							check=false;
							break;
						}
						b--;
						s[i]='1';
					}else if(re[i]=='0'){
						if(a<0){
							check=false;
							break;
						}
						a--;
						s[i]='0';
					}
				}else if(re[i]=='?'){
					if(s[i]=='1'){
						if(b<0 ){
							check=false;
							break;
						}
						b--;
						re[i]='1';
					}else if(s[i]=='0'){
						if(a<0){
							check=false;
							break;
						}
						a--;
						re[i]='0';
					}
				}else{
					check=false;
					break;
				}
			}else{
				if(s[i]=='?'&&re[i]=='?'){
					if(a>=2){
						a-=2;
						s[i]='0';
						re[i]='0';
					}else if(b>=2){
						b-=2;
						s[i]='1';
						re[i]='1';
					}else{
						check=false;
						break;
					}		
				}		
			}
		}
		if(len%2==1&&check){
			if(s[len/2]=='?'){
				if(a>0){
					s[len/2]='0';
					a--;
				}else if(b>0){
					s[len/2]='1';
					b--;
				}else{
					check=false;
				}		
			}
		}
		if(!check||a!=0||b!=0){
			cout<<-1<<endl;
		}else{
			if(len%2==1){
				for(int i=0;i<=len/2;i++){
					cout<<s[i];
				}
				for(int i=len/2-1;i>=0;i--){
					cout<<re[i];
				}
				cout<<"\n";			
			}else{
				for(int i=0;i<len/2;i++){
					cout<<s[i];
				}
				for(int i=len/2-1;i>=0;i--){
					cout<<re[i];
				}
				cout<<"\n";
			}
		}
	}

	return 0;
}

