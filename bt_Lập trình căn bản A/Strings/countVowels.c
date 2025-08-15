#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countVowels(char s[]){
	int i,len=strlen(s),c=0;
	for(i=0;i<len;i++){
		if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='o'||tolower(s[i])=='u'||tolower(s[i])=='i'){
			c++;
		}
	}
	return c;
}
int main(){
	char str[500];
	fgets(str,500,stdin);
	printf("%s%d",str,countVowels(str));
}
