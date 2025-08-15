#include <stdio.h>
int checkPrime(long long int p){
    int i,x=0;
    for(i=2;i<=p;i++){
        if(p%i==0 && p!=i){
            x=0;
            break;
        }else{
            x=1;
        }
    }
    return x;
}
int main(){
    int i;
    long long p;
    scanf("%lld",&p);
    printf("%d",checkPrime(p));
    return 0;
}
