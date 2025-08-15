#include <stdio.h>
int Length(char s[]){
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}
int main(){
	char str[500];
	int len;
	fgets(str,500,stdin);
	//Remove '\n' in fgets
	len = Length(str);
	if (str[len-1]=='\n') 
	{
	    len--;
	    str[len]='\0';
	}
	printf("%s\n%d",str, len);
}
