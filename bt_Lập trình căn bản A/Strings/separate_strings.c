#include <stdio.h>
#include <string.h>
void separate(char s[]){
	int i, len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]!=' '){
			printf("%c",s[i]);
		}else if(s[i]==' '&&s[i+1]!=' '){
			printf("\n");
		}
	}
}
int main(){
	char s[500]; fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';
	separate(s);
}
