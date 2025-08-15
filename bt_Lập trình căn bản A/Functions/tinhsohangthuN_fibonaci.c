#include <stdio.h>
int F(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return F(n-2)+F(n-1);
    }
}
int main(){
	//int n; scanf("%d",&n);
	int i;
    for(i=0;i<=40;i++){
        printf("%d ",F(i));
    }return 0;
}
