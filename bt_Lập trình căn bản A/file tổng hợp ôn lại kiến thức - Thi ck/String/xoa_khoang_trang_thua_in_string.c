#include <stdio.h>
#include <string.h>
void delete(char s[],int p){
    int i;
    for(i=p;i<strlen(s)-1;i++){
        s[i]=s[i+1];
    }
    s[strlen(s)-1]='\0';
}
void print(char s[]){
    int i;
    for(i=0;i<strlen(s)-1;i++){
        if((i==0 & s[i]==' ')||(s[i]==' ' && s[i+1]==' ')){
            delete(s,i);
            i--;
        }
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
