#include <stdio.h>
#include <stdlib.h>
int main(){
    char file[10]; scanf("%s",file);
    FILE *f=fopen(file,"r");
    int s=0;
    
//    char ch,prev_ch='\0';
//    while((ch=fgetc(f))!=EOF){
//    	if(ch=='\n' && prev_ch!='\n'){
//    		s++;	
//    	}
//		prev_ch=ch;
//    }
    
    int i;
    for(i=0;i<100;i++){
        if(fgetc(f)=='\n'){
            s++;
            i=0;
        }
    }
    
    fclose(f);
    printf("%d",s);
    return 0;
}
