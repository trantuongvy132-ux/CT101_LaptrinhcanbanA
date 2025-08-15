#include <stdio.h>
#include <math.h>
int isPrime(int n){
	int i;
    if(n<=1){
        return 0;
    }else{
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",isPrime(n));
	return 0;
}
