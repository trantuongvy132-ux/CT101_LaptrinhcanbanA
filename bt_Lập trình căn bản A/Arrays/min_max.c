#include <stdio.h>
int main(){
    int n,i; scanf("%d",&n);
    int a[n-1];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0];
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("\n%d %d",min,max);
    return 0;
}
