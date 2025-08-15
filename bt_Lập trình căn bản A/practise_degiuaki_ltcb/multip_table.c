#include <stdio.h>
void multi_table(){
	int i,j;
	for(i=1;i<=9;i+=3){
		for(j=1;j<=10;j++){
			printf("%d x %2d = %2d\t",i,j,i*j);
			printf("%d x %2d = %2d\t",i+1,j,(i+1)*j);
			printf("%d x %2d = %2d",i+2,j,(i+2)*j);
			printf("\n");
		}printf("\n");
	}
}
int main(){
	multi_table();
	return 0;
}
