#include <stdio.h>
int isPalindrome(int n){
	int t=0, m=n;
	while(n>0){
		t=t*10+(n%10);
		n/=10;
	}
	if(t==m){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	//int n; scanf("%d",&n);
	if (isPalindrome(12344321))
	  printf("YES");
	else  printf("NO");
}
