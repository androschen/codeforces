#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	cin>>n;
	int a[n],b[n];
	bool check=true;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==1||a[i]%2==-1){
			if(check){
				b[i]=floor((double)a[i]/2);	
			}else{
				b[i]=ceil((double)a[i]/2);
			}
			check^=true;
		}else{
			b[i]=a[i]/2;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<b[i]<<endl;
	}
//	cout<<sum<<endl;
	
	return 0;
}
