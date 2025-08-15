#include <stdio.h>
#include <string.h>
void check(char s[]){
    int i;
    for(i=0;i<strlen(s)/2;i++){
        if(s[i]!=s[strlen(s)-1-i]){
            printf("NO");
            return;
        }
    }
    printf("YES");
}
int main(){
    char s[500]; fgets(s,sizeof(s),stdin);
    s[(strcspn(s,"\n"))]='\0';
    puts(s);
    check(s);
    return 0;
}
