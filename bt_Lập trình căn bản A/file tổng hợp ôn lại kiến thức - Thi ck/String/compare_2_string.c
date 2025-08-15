#include <stdio.h>
#include <ctype.h>
#include <string.h>
int Compare(char s1[],char s2[]){
    int i=0,j=0,d=0;
    while(s1[i]!='\0' && s2[j]!='\0' && !d){
        d=tolower(s1[i])-tolower(s2[j]);
        i++;
        j++;
    }
    return d;
}
int main(){
	char s1[500], s2[500];
	int len;
	fgets(s1,500,stdin);
	//Remove '\n' in fgets
	len = strlen(s1);
	if (s1[len-1]=='\n') 
	{
	    len--;
	    s1[len]='\0';
	}
	
	fgets(s2,500,stdin);
	//Remove '\n' in fgets
	len = strlen(s2);
	if (s2[len-1]=='\n') 
	{
	    len--;
	    s2[len]='\0';
	}
	if (Compare(s1,s2) < 0) printf("1 < 2");
	else if (Compare(s1,s2) > 0) printf("1 > 2");
	else printf("1 = 2");
}
