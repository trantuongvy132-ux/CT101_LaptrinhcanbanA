#include <stdio.h>
void in_nguoc(int n){
    if(n!=0){
        printf("%d ",n%10);
        in_nguoc(n/10);
    }
}
//void in_nguoc(int n){
//    while(n>=1){
//        printf("%d ",n%10);
//        n/=10;
//    }
//}
int main(){
	//in_nguoc(1346);
	in_nguoc(401);
	return 0;
}
