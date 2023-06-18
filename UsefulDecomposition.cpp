#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 100007
using namespace std;

vector<int>tree[MAX];

vector<int>leaf;

void dfs(int v, int pr){
	int degree=0;
	for(int x: tree[v]){
		if(x!=pr){		
			degree++;
			dfs(x,v);
		}
	}
	if(degree==0){
		leaf.push_back(v);
	}
}

int main(){
	int a,b,n;
	
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>a>>b;
		a--,b--;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	int root=0,cnt=0;
	for(int i=0;i<n;i++){
		if(tree[i].size()>2){
			cnt++;
			root=i;
		}
	}
	if(cnt>1){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
		dfs(root,-1);
		cout<<leaf.size()<<endl;
		for(int i=0;i<leaf.size();i++){
			cout<<root+1<<" "<<leaf[i]+1<<endl;
		}
	}

	return 0;
}

