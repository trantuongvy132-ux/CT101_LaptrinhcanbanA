#include <stdio.h>
#include <math.h>
int checkPrime(long long int p){
	int i;
	for(i=2;i<=sqrt(p);i++){
		if(p%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	long long p;
	scanf("%lld",&p);
	printf("%d",checkPrime(p));
	return 0;
}
