#include <stdio.h>
int T[5][5]={0};

void scan(int A[][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&A[i][j]);
		}
	}
}
void print(int A[][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%2d ",A[i][j]);
		}printf("\n");
	}printf("\n");
}

void open_cell_1(int r,int c){
    T[r][c]=1;
}

int main(){
	//scan(T); printf("\nResult:\n");
	open_cell_1(2,3);
	print(T);
	return 0;
}
