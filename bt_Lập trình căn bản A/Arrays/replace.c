#include <stdio.h>
void replace(int A[],int n,int x,int y){
    int i;
    for(i=0;i<n;i++){
        if(A[i]==x){
            A[i]=y;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

int main(){
    int i,n,x,y; scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d %d",&x,&y);
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }printf("\n");
    replace(A,n,x,y);
    return 0;
}
