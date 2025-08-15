#include <stdio.h>
void print(int A[][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%2d ",A[i][j]);
		}printf("\n");
	}printf("\n");
}

void count_mines(int B[][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(B[i][j]==-1){
				int x,y;
				for(x=i-1;x<=i+1;x++){
					for(y=j-1;y<=j+1;y++){
						if((x!=i)||(y!=j)){
							B[x][y]++;
						}
					}
				}
			}
		}
	}
}
int main(){
	int B[5][5]={0};
	B[1][2]=B[3][1]=-1;
	//print(B);
	count_mines(B);
	print(B);
}
