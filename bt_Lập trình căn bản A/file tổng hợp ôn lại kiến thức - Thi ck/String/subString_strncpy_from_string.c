#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* subString(char s[],int pos,int number){
    char *des=(char*)malloc(number*sizeof(char));
    strncpy(des,s+pos,number);
    des[number]='\0';
    return des;
}
int main(){
//	char *st="toi di hoc";
//	char *res = subString(st, 4,2);
//	puts(st);
//	puts(res);
//	free(res);

	char *st="Dai Hoc Can Tho";
	char *res = subString(st, 0,7);
	puts(st);
	puts(res);
	free(res);
}
