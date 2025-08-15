#include <stdio.h>
#include <string.h>
int main(){
    char s[500]; fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    //
    int i;
    for(i=0;i<strlen(s)-1;i++){
        if(s[i]==' ' && s[i+1]!=' '){
            s[i]='\n';
        }
    }
    puts(s);
}
