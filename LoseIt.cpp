#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int a[n],count[6]={},idx;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==4)idx=0;
		else if(a[i]==8) idx=1;
		else if(a[i]==15) idx=2;
		else if(a[i]==16) idx=3;
		else if(a[i]==23) idx=4;
		else idx=5;
		if(idx==0) count[idx]++;
		else if(count[idx-1]>0){
			count[idx-1]--;
			count[idx]++;
		}
	}
	
	cout<<n-6*count[5]<<endl;
	
	return 0;
}

