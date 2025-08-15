#include <stdio.h>
#include <string.h>
void Insert(char c,int p,char st[]){
    int i; st[strcspn(st,"\n")]='\0';
    for(i=strlen(st)-1;i>=p;i--){
        st[i+1]=st[i];
    }
    st[p]=c;
}
int main(){
	char str[500];
	fgets(str,500,stdin);
	printf("%s",str);
	Insert('-', 4,str);
	printf("%s",str);
}
