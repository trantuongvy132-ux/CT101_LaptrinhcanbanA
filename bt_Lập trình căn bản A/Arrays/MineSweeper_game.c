#include <stdio.h>
void print(int A[][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",A[i][j]);
		}printf("\n");
	}printf("\n");
}
int main(){
	int B[5][5]={0}, T[5][5]={0};
	print(B);
	print(T);
}
