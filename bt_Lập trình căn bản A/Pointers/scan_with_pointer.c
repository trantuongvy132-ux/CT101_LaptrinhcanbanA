#include <stdio.h>
int main () {
    int i, n, A[100];
    scanf("%d", &n);
    int *p = A;
    //////////////////////////////////    
    //Vi?t l?nh c?a b?n ? dây
    for(i=0;i<n;i++){
    	scanf("%d",p+i);
    }
    //////////////////////////////////
    for (i = 0; i <n; i++)
        printf("%d ", A[i]);
    return 0;
}
