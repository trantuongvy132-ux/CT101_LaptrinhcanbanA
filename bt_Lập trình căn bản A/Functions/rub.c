#include <stdio.h>
#include <math.h>
int is_Armstrong(int n){
    int i,k=0,s=0;
    for(i=1;i<=n;i*=10){
        if(n/i>=1){
            k++;
        }
    }
    for(i=1;i<=k;i++){
        s+=pow((n/(int)pow(10,i-1))%10,k);
    }
    if(s==n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",is_Armstrong(n));
	return 0;
}
