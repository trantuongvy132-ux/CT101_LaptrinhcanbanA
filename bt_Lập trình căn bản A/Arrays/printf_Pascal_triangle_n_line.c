#include <stdio.h>
double hoan_vi(int x){
    if(x==1||x==0){
        return 1.0;
    }else{
        return x*hoan_vi(x-1);
    }
}
double C(int n,int k){
    return hoan_vi(n)/(hoan_vi(k)*(hoan_vi(n-k)));
}
int main(){
    int n; scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            if(j==0||j==i-1){
                printf("%d ",1);
            }else{
                printf("%.lf ",C(i-1,j));
            }
        }printf("\n");
    }
	//printf("%d",hoan_vi(10));
	//printf("%d",C(2,2));
    return 0;
}
