#include <stdio.h>
double to_hop(int n,int k){
    int i; double c=1.0;
    for(i=1;i<=k;i++){
        c*=(n-i+1);
        c/=i;
    }
    return c;
}
int main(){
    int n; scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%.lf ",to_hop(i,j));
        }printf("\n");
    }
    return 0;
}
