#include <stdio.h>
#define M 5
#define N 5
#define MINE -1
/*Ma?ng B lu?u ba?ng dô` mi`n*/
int B[M][N];
/*Ma?ng T lu?u tra?ng tha´i ca´c o^*/
int T[M][N];
//int B[5][5];
//int T[5][5];

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

void open_cell_3(int r, int c) {
	int i,j;
    if (r >= 0 && r < M && c >= 0 && c < N) {
        if (T[r][c] == 1) {
            return;
        }
        T[r][c] = 1;
        if (B[r][c] == 0) {
            for (i = r - 1; i <= r + 1; i++) {
                for (j = c - 1; j <= c + 1; j++) {
                    open_cell_3(i, j);
                }
            }
        }
    }
}


int main() {
    scan(B); scan(T);
	int r,c; scanf("%d %d",&r,&c); printf("\nT=\n");
	open_cell_3(r,c);
	print(T); //print(B);
	return 0;
}

