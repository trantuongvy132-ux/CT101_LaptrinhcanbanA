#include <stdio.h>
int main(){
    int n,i,s=0; scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        if(a[i]%2!=0){
            s++;
        }
    }
    printf("\n%d\n",s);
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
