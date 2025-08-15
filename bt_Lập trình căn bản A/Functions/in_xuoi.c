#include <stdio.h>
void in_xuoi(int n){
    if(n>0){
        in_xuoi(n/10);
        printf("%d ",n%10);
    }
}
int main(){
	in_xuoi(1346);
	return 0;
}
