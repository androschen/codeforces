#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,d;
	
	cin>>n>>d;
	int s[n+2],p[n+2];
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	ll best=s[d]+p[1];
	int pS=2;
	int rank=d;
	for(int i=d-1;i>0;i--){
		while(pS<=n){
			if(s[i]+p[pS]<=best){
				rank=i;
				pS++;
				break;
			}
			pS++;
		}
		if(pS>n) break;
	}
	
	cout<<rank<<endl;

	return 0;
}

