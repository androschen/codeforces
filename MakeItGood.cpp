#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 100007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int pos=n-1;
		while (pos>0&& a[pos-1]>=a[pos]) pos--;
		while (pos>0&& a[pos-1]<=a[pos]) pos--;
		cout<<pos<<endl;
	}

	return 0;
}

