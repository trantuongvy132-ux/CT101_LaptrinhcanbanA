#include <stdio.h>
#include <math.h>
float my_abs(float x){
    return fabs(x);
}
int main(){
    float x;
    scanf("%f",&x);
    printf("%.2f",my_abs(x));
    return 0;
}
