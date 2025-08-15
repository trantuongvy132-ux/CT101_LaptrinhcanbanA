#include <stdio.h>
#include <string.h>
void Delete(int p,char st[]){
	st[strcspn(st,"\n")]='\0';
	int i,len=strlen(st);
	for(i=p;i<len;i++){
		st[i]=st[i+1];
	}
}
int main(){
	char str[500];
	fgets(str,500,stdin);
	printf("%s",str);
	Delete(3,str);
	printf("%s",str);
}
