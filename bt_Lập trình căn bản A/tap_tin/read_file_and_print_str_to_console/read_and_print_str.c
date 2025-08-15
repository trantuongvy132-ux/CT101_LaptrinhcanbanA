#include <stdio.h>
#include <stdlib.h>
int main(){
    char file[100]; scanf("%s",file);
    FILE *f=fopen(file,"r");
    char buffer[100];
    while(fgets(buffer,sizeof(buffer),f)!=NULL){
        if(buffer[0]!='\n'){
            printf("%s",buffer);
        }
    }
    fclose(f);
    return 0;
}
