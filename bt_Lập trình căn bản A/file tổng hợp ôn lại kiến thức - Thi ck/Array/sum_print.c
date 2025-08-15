#include <stdio.h>
void print(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int n; scanf("%d",&n);
    int i,A[n],s=0;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        s+=A[i];
    }
    //
    printf("%d\n",s);
    print(A,n);
    return 0;
}
