#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mystrcpy(char *s1,char *s2){
	int len=strlen(s1);
	strcpy(s2,s1);
	s2[len]='\0';
}
//void mystrcpy(char *s1,char *s2){
//	int i=0;
//	while(s1[i]!='\0'){
//		s2[i]=s1[i];
//		i++;
//	}
//	s2[i]='\0';
//}
int main(){
	char c[100];
	mystrcpy("Hello World", c);
	printf("%s", c);

//char c[100] = "AAAAAAAAAAAAAAAAAAAAAAAAA";
//mystrcpy("Hello World", c);
//printf("%s", c);

//	char *p = "Hello World";
//	char *c = (char*)malloc(100);
//	mystrcpy(p, c);
//	printf("%s", c);
//	free(c);
}
