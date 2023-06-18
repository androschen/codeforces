#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	
	cin>>n;
	int speed[n],ram[n],hdd[n],cost[n];

	int buy,price=1001;
	for(int i=0;i<n;i++){
		cin>>speed[i]>>ram[i]>>hdd[i]>>cost[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(speed[i]>speed[j]&&ram[i]>ram[j]&&hdd[i]>hdd[j]){
				speed[j]=0;
				ram[j]=0;
				hdd[j]=0;
				cost[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(cost[i]<price&&cost[i]!=0){
			price=cost[i];
			buy=i+1;
		}
	}
	
	cout<<buy<<endl;

	return 0;
}

