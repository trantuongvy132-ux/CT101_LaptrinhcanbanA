#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void decrypt(char *sInput,char *sOutput){
    FILE *fin=fopen(sInput,"r");
    FILE *fout=fopen(sOutput,"w");
    char buffer[100];
    int i;
    while(fgets(buffer,sizeof(buffer),fin)!=NULL){
    	int l=strlen(buffer);
    	for(i=0;i<l;i++){
    		if(isalpha(buffer[i])){
	    		if(isupper(buffer[i])){
	    			buffer[i]='A'+(buffer[i]-'A'+23)%26;
	    		}else{
	    			buffer[i]='a'+(buffer[i]-'a'+23)%26;
				}
				buffer[i]=toupper(buffer[i]);
			}
    	}
    	fprintf(fout,"%s",buffer);
	}
    fclose(fin);
    fclose(fout);
}
int main(){
	char *sInput="Input.txt";
	char *sOutput="Output.txt";
	//
	FILE *f=fopen(sInput,"r");
	if(!f){
		perror("Error operating file");
		return 1;
	}
	//
	decrypt(sInput,sOutput);
	return 0;
}
