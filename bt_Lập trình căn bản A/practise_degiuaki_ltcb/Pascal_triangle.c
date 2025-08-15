#include <stdio.h>
double giai_thua(int n){
	if(n==0||n==1){
		return 1.0;
	}else{
		return n*giai_thua(n-1);
	}
}
double to_hop(int n,int k){
	return giai_thua(n)/(giai_thua(k)*giai_thua(n-k));
}
int main(){
	int i,j,n; scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j<=i;j++){
			printf("%.lf ",to_hop(i,j));
		}printf("\n");
	}
}
