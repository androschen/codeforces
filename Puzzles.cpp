#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,m,i;
	
	cin>>n>>m;
	int f[m];
	for(i=0;i<m;i++){
		cin>>f[i];
	}
	
	sort(f,f+m);
	int min=1001;
	
	for(i=0;i<m-n+1;i++){
		if((f[i+n-1]-f[i])<min){
			min=f[i+n-1]-f[i];
		}
	}
	
	cout<<min<<endl;
	
	return 0;
}
