#include <stdio.h>
#include <string.h>
#include <ctype.h>
void print(char s[]){
    int i=0;
    while(s[i]!='\0'){
        if(i==0 || s[i-1]==' '){
            s[i]=toupper(s[i]);
        }else{
            s[i]=tolower(s[i]);
        }
        i++;
    }
    puts(s);
}
int main(){
    char s[500]; fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    puts(s);
    //
    print(s);
    return 0;
}
