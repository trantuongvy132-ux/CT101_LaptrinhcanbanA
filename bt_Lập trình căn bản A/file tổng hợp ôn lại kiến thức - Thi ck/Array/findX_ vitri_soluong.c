#include <stdio.h>
int main(){
    int m,n; scanf("%d %d",&m,&n);
    int i,j, A[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int x,s=0; scanf("%d",&x);
    //
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(A[i][j]==x){
                printf("(%d, %d) ",i,j);
                s++;
            }
        }
    }
    if(s>0){
        printf("\n%d",s);
    }else{
        printf("%d",s);
    }
    return 0;
}
