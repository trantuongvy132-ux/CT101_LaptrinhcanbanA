#include <stdio.h>
#include <stdlib.h>
int main(){
	int *a;
	
	int n; scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	    printf("%d ",a[i]);
	}
	
	free(a);	
}
