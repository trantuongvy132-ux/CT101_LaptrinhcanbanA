#include <stdio.h>
long long C(int n,int k){
	if(k==0||k==n){
		return 1;
	}else{
		return C(n-1,k-1)+C(n-1,k);
	}
}
//long long C(int n,int k){
//	int i; long long r=1;
//	for(i=1;i<=k;i++){
//		r*=(n+1-i);
//		r/=i;
//	}
//	return r;
//}
int main(){
	int n,k; scanf("%d %d",&n,&k);
	printf("%lld",C(n,k));
	return 0;
}
