#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int countFreq(string pat, string &txt){
    int M = pat.length();
    int N = txt.length();
    int res = 0;
    
    for (int i = 0; i <= N - M; i++){ 
      
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j]) break;
   
        if (j == M)  
        {
           res++;
           j = 0;
        }
    }
    return res;
}

int main(){
	string s;
	int  prob[6]={-1};
	cin>>s;
	
	prob[0]=countFreq("Danil",s);
	prob[1]=countFreq("Olya",s);
	prob[2]=countFreq("Slava",s);
	prob[3]=countFreq("Ann",s);
	prob[4]=countFreq("Nikita",s);
	
	int cntprb=0;
	for(int i=0;i<5;i++){
		cntprb+=prob[i];
	}
	
	if(cntprb==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}

