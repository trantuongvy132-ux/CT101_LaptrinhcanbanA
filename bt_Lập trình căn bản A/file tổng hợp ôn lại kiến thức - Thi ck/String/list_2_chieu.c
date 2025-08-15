#include <stdio.h>
#include <string.h>
int main(){
    int n; scanf("%d",&n); getchar();
    char list[n][50];
    int i;
    for(i=0;i<n;i++){
        fgets(list[i],sizeof(list[i]),stdin);
        list[i][strcspn(list[i],"\n")]='\0';
    }
    //
    for(i=1;i<=n;i++){
        printf("%d. %s\n",i,list[i-1]);
    }
    return 0;
}
