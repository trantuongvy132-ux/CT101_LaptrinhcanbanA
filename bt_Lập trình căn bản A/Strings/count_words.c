#include <stdio.h>
#include <string.h>
int main(){
	char s[500]; fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';
	puts(s);
	int i,len=strlen(s),c=1;
	for(i=0;i<len;i++){
		if(s[i]!=' ' && s[i+1]==' '){
			c++;
		}
	}
	printf("%d",c);
}
