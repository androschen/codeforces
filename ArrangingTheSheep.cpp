#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t,n;
	string s;
	
	cin>>t;
	while(t--){
		cin>>n>>s;
		int cnt=0,pos=-1,cur=-1;
		for(int i=0;i<n;i++){
			if(s[i]=='*') cnt++;
		}
		for(int i=0;i<n;i++){
			if(s[i]=='*'){
				cur++;
				if(cur==cnt/2) pos=i;
			}
		}
//		cout<<"POS"<<pos<<endl;
		ll ans=0;
		cur=pos-cnt/2;
		for(int i=0;i<n;i++){
			if(s[i]=='*'){
				ans+=abs(cur-i);
//				cout<<"ANS"<<ans<<"  cur"<<cur<<endl;
				cur++;
				
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}

