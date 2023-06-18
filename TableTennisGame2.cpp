#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int k,a,b;
	
	cin>>k>>a>>b;
	
	if(k>a&&k>b){
		cout<<-1<<endl;
	}else{
		if(b>a) swap(a,b);
		if(b<k&&a%k!=0){
			cout<<-1<<endl;
			return 0;
		}
		cout<<a/k+b/k<<endl;
	}
	return 0;
}

