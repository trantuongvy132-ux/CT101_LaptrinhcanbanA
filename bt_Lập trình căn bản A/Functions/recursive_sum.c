#include <stdio.h>
long long sum(int n){
    if(n==0){
        return 0;
    }else{
        return n+sum(n-1);
    }
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",sum(n));
	return 0;
}
