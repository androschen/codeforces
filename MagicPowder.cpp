#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,k;
	
	cin>>n>>k;
	int a[n],b[n],cake[n]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=1001;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int i=0,cnt=0;;
	while(k>=0){
		b[i]-=a[i];
		if(b[i]<0){
			k+=b[i];
			b[i]=0;
		}
		if(i==n-1&&k>=0){
			i=-1;
			cnt++;
		}
		i++;
	}
	
	cout<<cnt<<endl;
	
	return 0;
}

