#include <stdio.h>
#include <ctype.h>
int main(){
	char c; scanf("%c",&c);
	if((65<=c&&c<=90)||(97<=c&&c<=122)){
		if(c==toupper(c)){
			printf("%c la in HOA",c);
		}else{
			printf("%c la in thuong",c);
		}
	}else{
		printf("%c khong phai la chu cai!",c);
	}
}
