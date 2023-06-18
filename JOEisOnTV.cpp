#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	
	cin>>n;
	
	double ans=0;

	while(n>0){
		ans+=(double)(1.0/n);
		n--;
	}
	cout<<ans<<endl;
	return 0;
}

