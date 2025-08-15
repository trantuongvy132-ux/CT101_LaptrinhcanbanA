#include <stdio.h>
void HN(char a,char b,char c,int n){
	if(n==1){
		printf("%c -> %c\n",a,c);
	}else{
		HN(a,c,b,n-1);
		HN(a,b,c,1);
		HN(b,a,c,n-1);
	}
}
int main(){
	int n; scanf("%d",&n);
	char a='A',b='B',c='C';
	HN(a,b,c,n);
}
