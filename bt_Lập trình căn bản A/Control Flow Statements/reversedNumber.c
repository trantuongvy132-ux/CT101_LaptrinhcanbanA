#include <stdio.h>
int main(){
    int n,digits=0;
    scanf("%d",&n);
    
    while(n>=1){
        digits=digits*10+(n%10);
        n/=10;
    }
    printf("%d",digits);
    return 0;
}
