#include <stdio.h>
#include <math.h>
int opposite(int n){
	int m=0;
	while(n>=1){
		m=m*10+(n%10);
		n/=10;
	}return m;
}	
int isPalindrome(int n){
    int i,k=0,a,b;
    for(i=1;i<=n;i*=10){
        k++;
    }
    if(k==1){
        return 1;
    }else if(k%2==0){
        a=n/pow(10,k/2);
        b=n%(int)pow(10,k/2);
    }else{
        a=(n/pow(10,(k-1)/2))/10;
        b=n%(int)pow(10,(k-1)/2);
    }
    if(a==opposite(b)){
    	return 1;
    }else{
    	return 0;
    }
}
int main(){
	int n;
	scanf("%d",&n);
	//printf("%d",opposite(n));
	printf("%d",isPalindrome(n));
	return 0;
}
