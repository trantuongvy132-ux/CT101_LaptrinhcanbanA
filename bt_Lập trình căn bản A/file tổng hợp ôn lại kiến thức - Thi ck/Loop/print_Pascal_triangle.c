#include <stdio.h>
long long int giai_thua(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*giai_thua(n-1);
	}
}
int to_hop(int n,int k){
	return (giai_thua(n))/(giai_thua(k)*giai_thua(n-k));
}
int main(){
	int n; scanf("%d",&n);
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			printf("%2d ",to_hop(i,j));  //ag:)
		}
		printf("\n");
	}
	return 0;
}
