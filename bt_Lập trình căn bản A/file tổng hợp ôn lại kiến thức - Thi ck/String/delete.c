#include <stdio.h>
#include <string.h>
void Delete(int p,char st[]){
    int i; st[strcspn(st,"\n")]='\0';
    for(i=p;i<strlen(st)-1;i++){
        st[i]=st[i+1];
    }
    st[strlen(st)-1]='\0';
}
int main(){
	char str[500];
	fgets(str,500,stdin);
	printf("%s",str);
	Delete(4,str);
	printf("%s",str);
}
