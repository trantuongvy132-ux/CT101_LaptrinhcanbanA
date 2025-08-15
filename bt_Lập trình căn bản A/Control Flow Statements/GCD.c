#include <stdio.h>
#include <stdlib.h>
int findGCD(int a, int b){
    while(b!=0){
        int temp=a;
        a=b;
        b=temp%b;
    }return abs(a);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD(%d, %d) = %d",a,b,findGCD(a,b));
    return 0;
}
