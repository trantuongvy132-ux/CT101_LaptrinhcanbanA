#include <stdio.h>
int main(){
    int seconds,d,h,m,s; scanf("%d",&seconds);
    d=seconds/86400;
    h=(seconds%86400)/3600;
    m=(seconds%86400%3600)/60;
    s=seconds%86400%3600%60;
    if(d>0){
        printf("%d days %02d:%02d:%02d",d,h,m,s);
    }else{
        printf("%02d:%02d:%02d",h,m,s);
    }
    return 0;
}
