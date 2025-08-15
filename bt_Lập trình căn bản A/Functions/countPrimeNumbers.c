#include <stdio.h>
#include <math.h>
int isPrime(long long int p){
	int i;
	for(i=2;i<=sqrt(p);i++){
		if(p%i==0){
			return 0;
		}
	}
	return 1;
}
int countPrimeNumbers(int a,int b){
    int i,s=0;
    for(i=a;i<=b;i++){
        if(isPrime(i)){
            s++;
        }
    }
    return s;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",countPrimeNumbers(a,b));
	return 0;
}
