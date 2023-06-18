#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int n;
	string s;
		
	cin>>n;
	cin>>s;
	int count=1001;
	for(int i=0;i<s.size()-3;i++){
		int cntA=s[i]-'A';
		cntA=min(cntA,'A'+26-s[i]);
		
		int cntC=s[i+1]-'C';
		if(cntC<0) cntC+=26;
		int cntC2='C'-s[i+1];
		if(cntC2<0) cntC2+=26;
		cntC=min(cntC,cntC2);
	
		int cntT=s[i+2]-'T';
		if(cntT<0) cntT+=26;
		int cntT2='T'-s[i+2];
		if(cntT2<0) cntT2+=26;
		cntT=min(cntT,cntT2);
		
		int cntG=s[i+3]-'G';
		if(cntG<0) cntG+=26;
		int cntG2='G'-s[i+3];
		if(cntG2<0) cntG2+=26;
		cntG=min(cntG,cntG2);
		
		int cnt=cntA+cntC+cntT+cntG;
		count=min(count,cnt);
	}
	cout<<count<<endl;
	

	return 0;
}

