#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int i,A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    //
    int min=A[0],max=A[0];
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
        if(A[i]<min){
            min=A[i];
        }else if(A[i]>max){
            max=A[i];
        }
    }
    printf("\n%d %d",min,max);
    return 0;
}
