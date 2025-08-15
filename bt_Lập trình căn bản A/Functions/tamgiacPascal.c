#include <stdio.h>
long long luythua(int n){
    if(n==1||n==0){
        return 1;
    }else{
        return n*luythua(n-1);
    }
}
long long C(int n,int k){
    return luythua(n)/(luythua(k)*luythua(n-k));
}
void tamgiacPascal(int n){
    int i,k;
    for(i=0;i<=n;i++){
        for(k=i;k>=0;k--){
            printf("%5lld",C(i,k));
        }
        printf("\n");
    }
}
int main(){
    int n; scanf("%d",&n);
    tamgiacPascal(n);
    //printf("%d",C(n,k));
    //printf("%d",luythua(n));
    return 0;
}
