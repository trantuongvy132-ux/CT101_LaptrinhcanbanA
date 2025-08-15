#include <stdio.h>
int isPrime(int x){
    int i;
    if(x<=1){
        return 0;
    }
    for(i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n; scanf("%d",&n);
    int i,A[n],s=0;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    //
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
        if(isPrime(A[i])==1){
            s++;
        }
    }
    printf("\n%d\n",s);
    for(i=0;i<n;i++){
        if(isPrime(A[i])==1){
            printf("%d ",A[i]);
        }
    }
    return 0;
}
