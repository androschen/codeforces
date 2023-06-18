#include<iostream>

using namespace std;

int main(){
	long long int n,i;
	
	scanf("%d",&n);
	int a;
	int f[100001]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a);
		f[a]++;
	}
	long long int dp[100001]={0};
	dp[0]=0;
	dp[1]=f[1];
	long long int maks;
	for(i=2;i<=100000;i++){
		dp[i]=max (dp[i-2]+ f[i]*i, dp[i-1]);
		if(dp[i]>maks){
			maks=dp[i];
		}
	}
	
	cout<<maks<<endl;
	
	return 0;
}
