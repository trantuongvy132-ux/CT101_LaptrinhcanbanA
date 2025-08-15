#include <stdio.h>
void print(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }printf("\n");
}
void change(int A[],int n,int x,int y){
    int i;
    for(i=0;i<n;i++){
        if(A[i]==x){
            A[i]=y;
        }
    }
}
int main(){
    int n; scanf("%d",&n);
    int i,A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int x,y; scanf("%d %d",&x,&y);
    //
    print(A,n);
    change(A,n,x,y);
    print(A,n);
    return 0;
}
