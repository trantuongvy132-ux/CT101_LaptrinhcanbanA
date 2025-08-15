#include <stdio.h>
#include <math.h>
int GCD(int a,int b){
	if(a%b==0){
		return abs(b);
	}else{
		return GCD(b,a%b);
	} 
}
int main(){
	int a,b; scanf("%d %d",&a,&b);
	printf("%d",GCD(a,b));
	
	return 0;
}
