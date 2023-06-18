#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b,c;
	
	cin>>n>>a>>b>>c;
	
	int ans=0;
	for(int i=0;i<=4000;i++){
		for(int j=0;j<=4000;j++){
			int zc=n-(a*i + j*b);
			if(zc<0){
				break;
			}
			double z= zc/(double)c;
			if(z==(int)z){
				ans=max(ans,(int)+z+i+j);
			}
		}
	}
	
	cout<<ans<<endl;
	return 0;
}
