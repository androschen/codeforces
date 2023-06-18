#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	
	cin>>n>>m;
	long long int a[n],b;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int dorm=1;
	int left=1;
	long long int totalbefore=0;
	long long int totalroom=a[0];
	for(int i=0;i<m;i++){
		cin>>b;
		while(b>totalroom){
			dorm++;
			totalroom+=a[left];
			totalbefore=totalroom-a[left];
			left++;
		}
		cout<<dorm<<" "<<b-totalbefore<<endl;
	}

	return 0;
}

