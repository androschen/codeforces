#include<stdio.h>
#include<string.h>

int main(){
	int a,b,c,d,i;
	char s[100001];
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	scanf("%s",&s);
	
	int len=strlen(s);
	int calo1=0,calo2=0,calo3=0,calo4=0;
	
	for(i=0;i<len;i++){
		if(s[i]=='1') calo1++;
		else if(s[i]=='2') calo2++;
		else if (s[i]=='3') calo3++;
		else if(s[i]=='4') calo4++;
	}
	int total=calo1*a+calo2*b+calo3*c+calo4*d;
	
	printf("%d\n",total);
	
	return 0;
}
