#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char file[100]; scanf("%s",file);
    FILE *f=fopen(file,"r");
    char buffer[100];
    int i;
    while(fgets(buffer,sizeof(buffer),f)!=NULL){
    	char *r=strstr(buffer,"//");
        if(r){
            for(i=0;i<r-buffer;i++){
            	printf("%c",buffer[i]);
            }printf("\n");
        }else{
        	printf("%s",buffer);
		}
    }
    fclose(f);
    return 0;
}
