#include <stdio.h>
#include <string.h>
void delete(char s[],int len,int k){
	int i;
	for(i=k;i<len;i++){
		s[i]=s[i+1];
	}
}
void delete_space(char s[],int len){
	int i=0;
	while(i<len){
		if(s[i]==' '&&s[i+1]==' '){
			delete(s,len,i);
		}else{
			i++;
		}
	}
	if(s[0]==' '){
		delete(s,len,0);
	}
}
int main(){
	char s[500]; fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';
	puts(s);
	int len=strlen(s);
	delete_space(s,len);
	puts(s);
}
