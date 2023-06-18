#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,k;
	string s;
	
	cin>>n>>k;
	cin>>s;
	
	int level=0;
	for(char c='a';c<='z';c++){
		int lvlcnt=0;
		int i=0;
		while(i<n){
			if(s[i]!=c){
				i++;
			}else{
				int same=0;
				while(i<n&&s[i]==c){
					i++;
					same++;
					if(same==k){
						lvlcnt++;
						break;
					}
				}
			}
		}
		level=max(level,lvlcnt);	
	}
	
	cout<<level<<endl;
	
	return 0;
}

