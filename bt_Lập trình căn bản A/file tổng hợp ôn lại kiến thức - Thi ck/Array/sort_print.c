#include <stdio.h>
void print(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }printf("\n");
}
void sort(int A[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main(){
    int n; scanf("%d",&n);
    int i,A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    //
    print(A,n);
    sort(A,n);
    print(A,n);
    return 0;
}
