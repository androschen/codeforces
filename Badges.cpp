#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int b,g,n;
	
	cin>>b>>g>>n;
	
	if(b>n&&g>n){
		cout<<n+1<<endl;
	}else{
		if(g>b)	swap(g,b);
		int cnt=0;
		while(g>=0){
			if(b+g>=n) cnt++;
			g--;
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}

