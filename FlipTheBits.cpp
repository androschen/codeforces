#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		string a,b;
		
		cin>>a>>b;
		if(a==b){
			cout<<"YES"<<endl;
			continue;
		}
		int one=0,zero=0;
		for(int i=n-1;i>=0;i--){
			if(a[i]=='0') zero++;
			else one++;
		}

		bool check=true;
		bool ce=true;
		for(int i=n-1;i>=0;){
			if(check){
				while(a[i]==b[i]&&i>=0){
					if(a[i]=='0') zero--;
					else one--;
					i--;	
				}
			}else{
				while(a[i]!=b[i]&&i>=0){
					if(a[i]=='0') one--;
					else zero--;
					i--;
				}
			}
			if(zero==one){
				check^=true;
			}else{
				ce=false;
				break;
			}
		}
		if(ce){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

