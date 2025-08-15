#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int i, A[n], s=0;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        s+=pow(A[i],2);
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }printf("\n");
    printf("%d",s);
    return 0;
}
