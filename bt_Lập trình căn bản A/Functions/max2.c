#include <stdio.h>
int max2(int a,int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",max2(a,b));
	return 0;
}
