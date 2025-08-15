#include <stdio.h>
#include <string.h>
void mystrcpy(char *s1,char *s2){
    int i;
    for(i=0;i<strlen(s1);i++){
        s2[i]=s1[i];
    }
    s2[strlen(s1)]='\0';
}
//void mystrcpy(char *s1,char *s2){
//    strcpy(s2,s1);
//    //s2[strlen(s1)]='\0';
//}
int main(){
//	char c[100];
//	mystrcpy("Hello World", c);
//	printf("%s", c);
	
	char c[100] = "AAAAAAAAAAAAAAAAAAAAAAAAA";
	mystrcpy("Hello World", c);
	printf("%s", c);
}
