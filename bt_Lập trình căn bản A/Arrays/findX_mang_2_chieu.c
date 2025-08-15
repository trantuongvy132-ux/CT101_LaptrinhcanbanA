#include <stdio.h>
void findX(int m,int n,int A[m][n],int x){
    int i,j,s=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(A[i][j]==x){
                printf("(%d, %d) ",i,j);
                s++;
            }
        }
    }
    if(s!=0){
        printf("\n");
    }printf("%d",s);
}
int main(){
    int m,n,x; scanf("%d %d",&m,&n);
    int i,j,A[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    scanf("%d",&x);
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }printf("\n");
    }
    findX(m,n,A,x);
    return 0;
}
