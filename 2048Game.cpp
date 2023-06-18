#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int q,n;
	
	cin>>q;
	while(q--){
		cin>>n;
		int s[n];
		int power[12]={0};
		bool check=false;
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			if(s[i]<=2048){
				sum+=s[i];
			}
		}
		if(sum>=2048){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

