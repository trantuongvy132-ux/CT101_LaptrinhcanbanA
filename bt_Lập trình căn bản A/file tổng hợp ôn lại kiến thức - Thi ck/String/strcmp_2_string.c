#include <stdio.h>
#include <string.h>
void check(char s1[],char s2[]){
    if(strcmp(s1,s2)>0){
        printf("1 > 2");
    }else if(strcmp(s1,s2)<0){
        printf("1 < 2");
    }else{
        printf("1 = 2");
    }
}
int main(){
    char s1[100]; fgets(s1,sizeof(s1),stdin);
    s1[strcspn(s1,"\n")]='\0';
    char s2[100]; fgets(s2,sizeof(s2),stdin);
    s2[strcspn(s2,"\n")]='\0';
    //
    check(s1,s2);
    return 0;
}
