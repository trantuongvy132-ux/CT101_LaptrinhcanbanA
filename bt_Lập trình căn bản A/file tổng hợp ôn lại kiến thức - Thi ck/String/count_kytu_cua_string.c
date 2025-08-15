#include <stdio.h>
#include <string.h>
int count(char s[]){
    int i=0,k=1;
    while(s[i]!='\0'){
        if(s[i]==' ' && s[i+1]!=' '){
            k++;
        }
        i++;
    }
    return k;
}
int main(){
    char s[500]; fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    puts(s);
    printf("%d",count(s));
    return 0;
}
