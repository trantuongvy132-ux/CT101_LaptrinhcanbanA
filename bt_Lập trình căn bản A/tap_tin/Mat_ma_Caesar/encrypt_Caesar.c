#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void encrypt(char *sInput,char *sOutput){
    //FILE *fin=fopen(sInput,"r");
    FILE *fin=fopen("sInput2.txt","r");
    //FILE *fout=fopen(sOutput,"w");
    FILE *fout=fopen("sOutput2.txt","w");
    char buffer[1000];
    int i;
    while(fgets(buffer,sizeof(buffer),fin)!=NULL){
    	int l=strlen(buffer);
    	for(i=0;i<l;i++){
		    if(isalpha(buffer[i])){
		        if(islower(buffer[i])){
		            buffer[i]='a'+(buffer[i]-'a'+3)%26;
		        }else{
		            buffer[i]='A'+(buffer[i]-'A'+3)%26;
		        }
		        buffer[i]=toupper(buffer[i]);
		    }
		}

//	    for(i=0;i<l;i++){
//	    	if(isalpha(buffer[i])){
//	    		buffer[i]=(buffer[i]-'A'+3)%26+'A';
//	        }
//	    }

	    fprintf(fout,"%s",buffer);
    }
    fclose(fin);
    fclose(fout);
}
int main(){
	char *sInput="sInput.txt";
	char *sOutput="sOutput.txt";
	//
	FILE *f=fopen("sInput.txt","r");
	if(!f){
		perror("Error operating file");
	}
	//
	encrypt(sInput,sOutput);
	return 0;
}
