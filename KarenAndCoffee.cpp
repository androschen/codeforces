#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,k,q;
	
	cin>>n>>k>>q;
	int l[n],r[n];
	long long int c[200002]={0};
	map<int,int>m;
	for(int i=0;i<n;i++){
		cin>>l[i]>>r[i];
		c[l[i]]++;
		c[r[i]+1]--;
	}
	for(int i=1;i<=200001;i++){
		c[i]+=c[i-1];
	}

	for(int i=1;i<=200001;i++){
		if(c[i]>=k){
			c[i]=c[i-1]+1;
		}else{
			c[i]=c[i-1];
		}
	}

	int a,b;
	for(int i=0;i<q;i++){
		cin>>a>>b;
	
		cout<<c[b]-c[a-1]<<endl;
	}

	return 0;
}

