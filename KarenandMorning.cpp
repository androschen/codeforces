#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,m;
	
	scanf("%d:%d",&n,&m);
	int cnt=0;
	if(n/10==m%10&&n%10==m/10){
		cout<<0<<endl;
	}else{
		for(int i=0;i<3600;i++){
			cnt++;
			m++;
			if(m==60){
				n++;
			}
			n%=24;
			m%=60;
			if(n/10==m%10&&n%10==m/10){
				break;
			}
		}
		cout<<cnt<<endl;
	}
	

	return 0;
}

