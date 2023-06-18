#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,k;
	map<int,int>m;
	cin>>n>>k;
	deque<int>q;
	int id[n],temp[n]={};
	for(int i=0;i<n;i++){
		cin>>id[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(m[id[i]]==0){
			q.push_front(id[i]);
			m[id[i]]=1;
			cnt++;
			if(cnt>k){
				m[q.back()]=0;	
				q.pop_back();
				cnt--;
			}
		}	
	}
	cout<<cnt<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop_front();
	}


	return 0;
}

