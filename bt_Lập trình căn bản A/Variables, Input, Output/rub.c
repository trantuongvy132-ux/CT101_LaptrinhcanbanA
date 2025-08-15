#include <stdio.h>
int main(){
    int n,y,w,d;
    scanf("%d",&n);
    y=n/365;
    w=(n%365)/7;
    d=(n%365)%7;
    
    printf("%d days = %d year(s) %d week(s) and %d day(s).",n,y,w,d);
    
    return 0;
}
