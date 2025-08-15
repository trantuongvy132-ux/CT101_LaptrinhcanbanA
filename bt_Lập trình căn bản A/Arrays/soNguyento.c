#include <stdio.h>
int soNguyento(int x){
    int i;
    if(x<=1){
    	return 0;
    }
    for(i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,i,s=0; scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        if(soNguyento(a[i])==1){
            s++;
        }
    }
    printf("\n%d\n",s);
    for(i=0;i<n;i++){
        if(soNguyento(a[i])==1){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
