#include <stdio.h>
int main(){
    int n,d=0;
    scanf("%d",&n);
    
    while(n>=1){
        d++;
        n/=10;
    }
    printf("Number of digits: %d",d);
    return 0;
}
