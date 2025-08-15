#include <stdio.h>
int main(){
	int i,j;
	for(i=0;i<9;i+=3){
		for(j=1;j<=3;j++){
			printf("%d ",j+i);
		}printf("\n");
	}
}
