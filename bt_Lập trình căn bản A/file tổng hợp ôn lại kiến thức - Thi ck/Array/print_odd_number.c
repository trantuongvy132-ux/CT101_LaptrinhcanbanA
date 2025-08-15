#include <stdio.h>
void print(int A[],int n,int s){
    int i;
    if(s==0){
        printf("NONE");
        return;
    }
    for(i=0;i<n;i++){
        if(A[i]%2!=0){
            printf("%d ",A[i]);
        }
    }
}
int main(){
    int n; scanf("%d",&n);
    int i,A[n],s=0;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]%2!=0){
            s++;
        }
    }
    //
    printf("%d\n",s);
    print(A,n,s);
}
