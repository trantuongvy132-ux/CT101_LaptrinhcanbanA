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

int count_remain(){
    int i,j,s=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(T[i][j]==0){
                s++;
            }
        }
    }
    return s;
}

int main(){
	scan(T); printf("\nResult:\n");
	//print(B); print(T);
	printf("%d",count_remain());
	return 0;
}
