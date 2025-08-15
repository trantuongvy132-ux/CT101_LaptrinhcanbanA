#include <stdio.h>
int main(){
    double e,pi=0;
    int n=0;
    double t=4.0/(2*n+1);
    scanf("%lf",&e);
    
    while(t>e){
        if(n%2==0){
            pi+=t;
        }else{
            pi-=t;
        }
        n++;
        t=4.0/(2*n+1);
    }
    printf("pi = %.8lf",pi);
    return 0;
}
