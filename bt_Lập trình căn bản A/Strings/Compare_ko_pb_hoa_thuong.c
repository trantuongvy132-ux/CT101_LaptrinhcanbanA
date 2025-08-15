#include <stdio.h>
#include <ctype.h>
#include <string.h> //dung cho in main()
int len(char s[]){
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}
int Compare(char s1[],char s2[]){
	int i; int l=(len(s1)+len(s2))/2; //int l=(strlen(s1)+strlen(s2))/2;
	for(i=0;i<l;i++){
		if(tolower(s1[i])>tolower(s2[i])){
			return 1;
		}else if(tolower(s1[i])<tolower(s2[i])){
			return -1;
		}
	}
	return 0;
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
