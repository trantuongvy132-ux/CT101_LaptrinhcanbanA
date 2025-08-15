#include <stdio.h>
#include <math.h>
int is_Armstrong(int n){
    int i,k = 0,s = 0;
    for(i = n; i > 0; i /= 10){
        k++;
    }
    for(i = n; i > 0; i /= 10){
        s+=pow(i % 10, k);
    }
    if(s == n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", is_Armstrong(n));
    return 0;
}

