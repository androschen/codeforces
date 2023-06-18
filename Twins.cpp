#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	int me=0;
	int sum=0;
	for(int i=0;i<n;i++){
		if(i==n-1){
			me+=a[i];
		}
		else{
			sum+=a[i];
		}
	}
	int count=1;
	for(int i=n-2;i>=0;i--){
		if(me>sum) break;
		else{
			me+=a[i];
			sum-=a[i];
			count++;
		}
	}
	cout<< count<<endl;
	return 0;
}
