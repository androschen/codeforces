#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int k,a[13];
	
	cin>>k;
	for(int i=0;i<12;i++){
		cin>>a[i];
	}
	
	sort(a,a+12,greater<int>());
	
	int sum=0;
	int count=0;
	for(int i=0;i<12;i++){
		if(sum>=k) break;
		sum+=a[i];
		count++;
	}
	if(k>sum){
		cout<<"-1"<<endl;
	}else{
		cout<<count<<endl;
	}
	return 0;
}
