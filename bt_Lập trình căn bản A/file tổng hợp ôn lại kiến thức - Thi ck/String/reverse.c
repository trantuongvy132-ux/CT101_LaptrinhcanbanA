#include <stdio.h>
#include <string.h>
void reverse(char s[]){
    int i;
    for(i=0;i<(strlen(s))/2;i++){
        int temp=s[i];
        s[i]=s[strlen(s)-1-i];
        s[strlen(s)-1-i]=temp;
    }
}
int main(){
	char str[500];
	int len;
	fgets(str,500,stdin);
	//Remove '\n' in fgets
	len = strlen(str);
	if (str[len-1]=='\n') 
	{
	    len--;
	    str[len]='\0';
	}
	
	reverse(str);
	puts(str);
}
