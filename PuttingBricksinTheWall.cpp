#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		char s[n+1][n+1];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>s[i][j];
			}
		}
	
		if(s[0][1]==s[1][0]){
			if(s[n-1][n-2]==s[n-2][n-1]&&s[n-1][n-2]!=s[0][1]){
				cout<<"0"<<endl;
			}else if(s[n-1][n-2]==s[n-2][n-1]&&s[n-1][n-2]==s[0][1]){
				cout<<2<<endl;
				cout<<n-1<<" "<<n<<endl;
				cout<<n<<" "<<n-1<<endl;
			}else if(s[n-1][n-2]!=s[n-2][n-1]){
				cout<<1<<endl;
				if(s[n-1][n-2]==s[0][1]){
					cout<<n<<" "<<n-1<<endl;
				}else{
					cout<<n-1<<" "<<n<<endl;
				}
			}
		}else{
			if(s[n-1][n-2]==s[n-2][n-1]){
				cout<<1<<endl;
				if(s[n-1][n-2]==s[0][1]){
					cout<<1<<" "<<2<<endl;
				}else{
					cout<<2<<" "<<1<<endl;
				}
			}else{
				if(s[n-1][n-2]!=s[0][1]){
					cout<<2<<endl;
					cout<<1<<" "<<2<<endl;
					cout<<n<<" "<<n-1<<endl;
				}else if(s[n-2][n-1]!=s[0][1]){
					cout<<2<<endl;
					cout<<1<<" "<<2<<endl;
					cout<<n-1<<" "<<n<<endl;
				}else if(s[n-1][n-2]!=s[1][0]){
					cout<<2<<endl;
					cout<<2<<" "<<1<<endl;
					cout<<n<<" "<<n-1<<endl;
				}else{
					cout<<2<<endl;
					cout<<2<<" "<<1<<endl;
					cout<<n-1<<" "<<n<<endl;
				}
			}
		}
	}

	return 0;
}

