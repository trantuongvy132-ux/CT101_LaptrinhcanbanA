#include <stdio.h>
int main(){
    int m,n,i,j,x=0;
    scanf("%d %d",&m,&n);
    int a[m*n];
    for(i=0;i<m*n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            printf("%d ",a[x]);
            x++;
        }
        printf("\n");
    }
    return 0;
}
