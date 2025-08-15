#include <stdio.h>
void increase(int A[],int n){
    int i,j;
    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++){
            if(A[i]>A[i+1]){
                int temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int n,i; scanf("%d",&n);
    int A[n-1];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
    	printf("%d ",A[i]);
    }printf("\n");
    increase(A,n);
    return 0;
}
