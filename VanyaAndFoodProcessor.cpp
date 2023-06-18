#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,k,h;
	
	cin>>n>>h>>k;
	int a[n];
	ll height=0,time=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(height+a[i]<=h){
			height+=a[i];
		}else{
			time++;
			height=a[i];
		}
		time+=height/k;
		height%=k;
	}
	if(height>0) time++;
	cout<<time<<endl;

	return 0;
}

