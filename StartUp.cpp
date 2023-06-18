#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	string s;
	string mirror;
	
	cin>>s;
	int len=s.size();
	for(int i=len-1;i>=0;i--){
		mirror+=s[i];
	}
	bool check=false;
	for(int i=0;i<len;i++){
		if(s[i]=='A'||s[i]=='H'||s[i]=='I'||s[i]=='M'||s[i]=='O'||s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='W'||s[i]=='X'||s[i]=='Y'){
			check=true;
		}else{
			check=false;
			break;
		}
	}
	if(mirror==s&&check){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}

