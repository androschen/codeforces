#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,s;
	
	cin>>n>>s;
	int h[n],m[n];
	int hours[n];
	for(int i=0;i<n;i++){
		cin>>h[i]>>m[i];
		hours[i]=h[i]*60+m[i];
	}
	if(hours[0]-s>0){
		cout<<0<<" "<<0<<endl;
		return 0;
	}
	for(int i=1;i<n;i++){
		if(hours[i]>=hours[i-1]+2*s+2){
			m[i-1]+=s+1;
			if(m[i-1]>59){
				h[i-1]+=m[i-1]/60;
				m[i-1]%=60;
			}
			cout<<h[i-1]<<" "<<m[i-1]<<endl;
			return 0;
		}
	}
	m[n-1]+=s+1;
	if(m[n-1]>59){
		h[n-1]+=m[n-1]/60;
		m[n-1]%=60;
	}
	cout<<h[n-1]<<" "<<m[n-1]<<endl;

	return 0;
}

