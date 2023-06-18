#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	string s;
	string rev;
	
	cin>>s;
	int len=s.size();
	for(int i=len-1;i>=0;i--){
		rev+=s[i];
	}
	int cnt=0;
	for(int i=0;i<len;i++){
		if(rev[i]!=s[i]) cnt++;
	}
	
	if(cnt==2||rev==s&&len%2==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}

