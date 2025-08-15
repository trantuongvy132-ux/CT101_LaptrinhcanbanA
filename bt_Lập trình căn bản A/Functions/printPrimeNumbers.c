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
void printPrimeNumbers(int a,int b){
    int i;
    for(i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printPrimeNumbers(a,b);
	return 0;
}
