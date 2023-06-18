#include<stdio.h>
#include<string.h>

int main(){
	int t,i,j,px,py;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		char s[100001];
		scanf("%d %d",&px,&py);
		scanf("%s",&s);
		int len=strlen(s);
		int u=0,d=0,r=0,l=0;
		for(j=0;j<len;j++){
			if(s[j]=='U') u++;
			else if(s[j]=='D') d++;
			else if(s[j]=='R') r++;
			else l++;
		}
		int check=1;
		if(px<0&&l<(px*-1)){
			check=0;
		}else if(px>0&&r<px){
			check=0;
		}else if(py>0&&u<py){
			check=0;
		}else if(py<0&&d<(py*-1)){
			check=0;
		}
		
		if(check==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
