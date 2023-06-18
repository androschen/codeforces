#include<iostream>

using namespace std;

int main(){
	char way;
	string s;
	string qwe="qwertyuiop";
	string asd="asdfghjkl;";
	string zxc="zxcvbnm,./";
	
	cin>>way;
	cin>>s;
	int len=s.size();
	if(way=='R'){
		for(int i=0;i<len;i++){
			for(int j=0;j<10;j++){
				if(s[i]==qwe[j]){
					s[i]=qwe[j-1];
				}else if(s[i]==asd[j]){
					s[i]=asd[j-1];
				}else if(s[i]==zxc[j]){
					s[i]=zxc[j-1];
				}
			}
		}
	}
	else if(way=='L'){
		for(int i=0;i<len;i++){
			for(int j=0;j<10;j++){
				if(s[i]==qwe[j]){
					s[i]=qwe[j+1];
					break;
				}else if(s[i]==asd[j]){
					s[i]=asd[j+1];
					break;
				}else if(s[i]==zxc[j]){
					s[i]=zxc[j+1];
					break;
				}
			}
		}
	}
	cout<<s<<endl;
	
	return 0;
}
