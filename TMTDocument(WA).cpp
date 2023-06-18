#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		string s;
		cin>>n;
		cin>>s;
		
		int cntT=0,cntM=0;
		bool check=true;
		for(int i=0;i<n;i++){
			if(s[i]=='T'){
				cntT++;
			}else{
				cntM++;
			}
		}
		if(s[0]=='M'||s[n-1]=='M') check=false;
		int streakM=0;
		int SM=0;
		for(int i=1;i<n-1;i++){
			if(s[i]=='M') SM++;
			else{
				SM=0;
			}
			streakM=max(streakM,SM);
		}
		int streakleft=0;
		int sl=0;
		for(int i=0;i<n/2;i++){
			if(s[i]=='T') sl++;
			else{
				sl=0;
			}
			streakleft=max(streakleft,sl);
		}
		int streakright=0;
		int sr=0;
		for(int i=n-1;i>=n/2;i--){
			if(s[i]=='T') sr++;
			else{
				sr=0;
			}
			streakright=max(streakright,sr);
		}
		if(streakleft<streakM||streakright<streakM) check=false;
		if(check&&cntT==(2*cntM)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

