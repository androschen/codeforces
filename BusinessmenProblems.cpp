#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	map<int,int>mp;
	cin>>n;
	int a[n],x[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>x[i];
		mp[a[i]]=x[i];
	}

	cin>>m;
	int b[m],y[m];
	for(int i=0;i<m;i++){
		cin>>b[i]>>y[i];
		if(mp[b[i]]<y[i]){
			mp[b[i]]=y[i];
		}
	}
	
	long long int maxx=0;
	map<int,int>:: iterator itr;
    for(itr=mp.begin(); itr!= mp.end(); itr++){
        maxx += itr->second;
    }
    
    cout<<maxx<<endl;

	
	return 0;
}

