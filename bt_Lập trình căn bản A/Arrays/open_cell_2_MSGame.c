#include <stdio.h>
int B[5][5],T[5][5];

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

void open_cell_2(int r,int c){
    int i,j;
    T[r][c]=1;
    if(B[r][c]==0){
        for(i=r-1;i<=r+1;i++){
            for(j=c-1;j<=c+1;j++){
                if((i>=0&&j>=0)&&(i<=4&&j<=4)&&(i!=r||j!=c)){
                    T[i][j]=1;
                }
            }
        }
    }
}

int main(){
	scan(B); scan(T);
	int r,c; scanf("%d %d",&r,&c); printf("\nT=\n");
	open_cell_2(r,c);
	print(T); //print(B);
	return 0;
}
