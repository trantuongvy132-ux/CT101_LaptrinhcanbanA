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

void open(int r,int c){
	if(r>=0&&r<=4&&c>=0&&c<=4){
		T[r][c]=1;
	}
}
void open_cell_3(int r,int c){
    if(T[r][c]==1){
        return;
    }else{
        T[r][c]=1;
        if(B[r][c]==0){
            open(r-1,c-1); open(r-1,c); open(r-1,c+1);
    		open(r,c-1);  open(r,c+1);
    		open(r+1,c-1); open(r+1,c); open(r+1,c+1);
        }
    }
}

int main(){
	scan(B); scan(T);
	int r,c; scanf("%d %d",&r,&c); printf("\nT=\n");
	open_cell_3(r,c);
	print(T); //print(B);
	return 0;
}
