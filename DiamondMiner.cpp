#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	long long int x,y;
	
	cin>>t;
	while(t--){	
		cin>>n;
		vector<long long int>miners;
		vector<long long int>dmine;
		
		for(int i=0;i<2*n;i++){
			cin>>x>>y;
			if(x==0){
				if(y<0) y*=-1;
				miners.push_back(y);
			}else{
				if(x<0) x*=-1;
				dmine.push_back(x);
			}
		}
		sort(miners.begin(),miners.end());
		sort(dmine.begin(),dmine.end());
		
		double sum=0;
		int left=0;;
		for(int i=0;i<n;i++){
			for(int j=left;j<n;j++){
				sum+=sqrt((miners[i]*miners[i])+(dmine[j]*dmine[j]));
				left++;
				break;
			}
		}
		cout<<setprecision(15)<<sum<<endl;
	}
	return 0;
}
