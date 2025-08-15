#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* subString(char s[],int pos, int number){
	char *destination=(char*)malloc((number+1)*sizeof(char));
	strncpy(destination,s+pos,number);
	destination[number]='\0';
	return destination;
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
