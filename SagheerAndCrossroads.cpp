#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int l[4],s[4],r[4],p[4];
	
	bool accidentIn=false;
	for(int i=0;i<4;i++){
		cin>>l[i]>>s[i]>>r[i]>>p[i];
		if(l[i]==1||s[i]==1||r[i]==1){
			if(p[i]==1)	accidentIn=true;
		}
	}
	if(accidentIn){
		cout<<"YES"<<endl;
	}else{
		for(int i=0;i<4;i++){
			if(p[(i+1)%4]==1&&r[i]==1){
				cout<<"YES"<<endl;
				return 0;
			}else if(p[(i+3)%4]==1&&l[i]==1){
				cout<<"YES"<<endl;
				return 0;
			}else if(p[(i+2)%4]==1&&s[i]==1){
				cout<<"YES"<<endl;
				return 0;
			}
		}
		cout<<"NO"<<endl;
	}
	


	return 0;
}

