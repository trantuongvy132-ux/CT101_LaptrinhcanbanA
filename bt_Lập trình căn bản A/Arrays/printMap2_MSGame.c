#include <stdio.h>
int B[5][5], T[5][5];

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

void printMap2(){
    int i,j;
    printf("  0 1 2 3 4\n");
    for(i=0;i<5;i++){
        printf("%d ",i);
        for(j=0;j<5;j++){
            if(T[i][j]==0){
                printf("# ");
            }else{
                if(B[i][j]==0){
                    printf(". ");
                }else if(B[i][j]==-1){
                    printf("x ");
                }else{
                    printf("%d ",B[i][j]);
                }
            }
        }printf("\n");
    }
}

int main(){
	scan(B); scan(T); printf("\nResult:\n");
	//print(B); print(T);
	printMap2();
	return 0;
}
