#include<bits/stdc++.h>

using namespace std;
#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007

int main(){
	int n,s;
	
	cin>>n>>s;
	int x[n],y[n];
	int sweets=-1;
	int min=100;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
		if(y[i]>0&&y[i]<min&&x[i]<s){
			min=y[i];
			sweets=100-y[i];
		}else if(y[i]==0&&min==100&&x[i]<=s) sweets=0;
	}
	if(sweets>=0){
		cout<<sweets<<endl;
	}else{
		cout<<-1<<endl;
	}

	return 0;
}

