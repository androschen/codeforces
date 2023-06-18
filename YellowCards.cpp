#include<bits/stdc++.h>

using namespace std;

int main(){
	int a1,a2,k1,k2,n;
	
	cin>>a1>>a2>>k1>>k2>>n;
	
	if(k1>k2){
		swap(k1,k2);
		swap(a1,a2);
	}
	int min=a1*(k1-1)+a2*(k2-1);
	if(min>=n){
		min=0;
	}else{
		min=n-min;
	}
	int max;
	if(n<=a1*k1){
		max=n/k1;
	}else{
		max=a1+(n-a1*k1)/k2;
	}
	cout<<min<<" "<<max<<endl;

	return 0;
}

