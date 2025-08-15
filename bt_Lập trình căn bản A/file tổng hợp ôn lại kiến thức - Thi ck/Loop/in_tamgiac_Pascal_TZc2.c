#include <stdio.h>
long long C(int n,int k){
    int i;
	long long r=1;
	if(k==0||k==n){
    	return 1;
    }
    for(i=1;i<=k;i++){
        r*=(n+1-i);
        r/=i;
    }
    return r;
}
int main(){
    int n; scanf("%d",&n);
    int i,j;
    for(i=0;i<n+1;i++){
        for(j=0;j<=i;j++){
            printf("%5lld ",C(i,j));
        }printf("\n");
    }
}
