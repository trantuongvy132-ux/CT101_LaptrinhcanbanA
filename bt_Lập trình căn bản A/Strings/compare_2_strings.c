#include <stdio.h>
#include <string.h>
int main(){
	char s1[100], s2[100];
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);
	
	int kq=strcmp(s1,s2);
	if(kq>0){
		printf("1 > 2");
	}else if(kq==0){
		printf("1 = 2");
	}else{
		printf("1 < 2");
	}
}
