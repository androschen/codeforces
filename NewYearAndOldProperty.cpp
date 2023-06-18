#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007

int main(){
	ull a,b,sum=0,pp,temp;
	
	scanf("%llu %llu",&a,&b);
	
	ull bA=a,bB=b;
	int nA=0,nB=0;
	while(bA>0){
		bA/=2;
		nA++;
	}
	while(bB>0){
		bB/=2;
		nB++;
	}
	
	for(ull i=nA;i<=nB;i++){
		pp= (1llu<<i) -1;
		for(ull j=0;j<i-1;j++){
			temp= pp - (1llu<<j);
			cout<<i<<" "<<pp<<" "<<temp<<endl;
			if(temp>=a &&temp <=b) sum++;
		}
	}
	
	printf("%llu\n",sum);

	return 0;
}

