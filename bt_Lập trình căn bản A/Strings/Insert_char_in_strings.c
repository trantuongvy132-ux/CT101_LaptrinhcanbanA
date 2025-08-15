#include <stdio.h>
#include <string.h>
void Insert(char c,int p,char st[]){
	st[strcspn(st,"\n")]='\0';
	int i,len=strlen(st);
	for(i=len;i>p;i--){
		st[i]=st[i-1];
	}
	st[p]=c;
}
int main(){
//	char str[500];
//	fgets(str,500,stdin);
//	printf("%s",str);
//	Insert(' ', 3,str);
//	printf("%s",str);
	
	char str[500];
	fgets(str,500,stdin);
	printf("%s",str);
	Insert('-', 4,str);
	printf("%s",str);
}
