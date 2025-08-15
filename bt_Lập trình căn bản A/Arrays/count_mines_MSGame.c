#include <stdio.h>

int B[5][5]={0};
	

void print(int A[][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%2d ",A[i][j]);
		}printf("\n");
	}printf("\n");
}

void around_mines(int B[][5],int i,int j){
	int x,y;
	for(x=i-1;x<=i+1;x++){
		for(y=j-1;y<=j+1;y++){
			if((x!=i||y!=j)&&x>=0&&y>=0&&B[x][y]!=-1){
				B[x][y]++;
			}
		}
	}
}
void count_mines(){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(B[i][j]==-1){
				around_mines(B,i,j);
			}
		}
	}
}
int main(){
	//B[0][0]=-1;
	B[2][1]=B[2][3]=B[1][2]=B[3][2]=-1;
	count_mines();
	print(B);
}
