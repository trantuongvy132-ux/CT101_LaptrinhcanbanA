#include <stdio.h>
#include <string.h>
#include <ctype.h> //z ma trong giao trinh noi thu vien string.h co toupper tolower roi ;l
int main(){
	char s[100]; fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0'; puts(s);
	int i, len=strlen(s);
	
//	int k=strcspn(s," ");
//	printf("%d",k);
	s[0]=toupper(s[0]);
	for(i=1;i<len;i++){
		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
		}else if(s[i-1]!=' '){
			s[i]=tolower(s[i]);
		}
	}
	puts(s);
}
