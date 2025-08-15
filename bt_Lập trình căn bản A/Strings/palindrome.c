#include <stdio.h>
#include <string.h>
void xoa_kytu_xuongdong(char s[]){
	int dodai = strlen(s);
	if(s[dodai-1]=='\n'){
		s[dodai-1]='\0';
	}
}
int palindrome(char s[],int l){
	int i;
	for(i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
        	return 0;
        }
    }
    return 1;
}
int main(){
    char s[100]; fgets(s,100,stdin);
	s[strcspn(s,"\n")]='\0';   //xoa_kytu_xuongdong(s);
	puts(s);
    int l=strlen(s);
    if(palindrome(s,l)==1){
    	printf("YES");
    }else{
    	printf("NO");
	}
	return 0;
}
