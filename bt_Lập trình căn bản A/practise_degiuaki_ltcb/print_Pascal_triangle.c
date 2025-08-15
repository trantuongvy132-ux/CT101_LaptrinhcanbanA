#include <stdio.h>
double giai_thua(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*giai_thua(n-1);
	}
}
double to_hop(int n,int k){
	return giai_thua(n)/(giai_thua(k)*giai_thua(n-k));
}
int main(){
	int n; scanf("%d",&n);
	int i,j;
	for(i=1;i<=n+1;i++){
		for(j=0;j<i;j++){
			printf("%2.lf ",to_hop(i-1,j));
		}printf("\n");
	}
	return 0;
	//printf("%.lf",to_hop(14,2));
}
