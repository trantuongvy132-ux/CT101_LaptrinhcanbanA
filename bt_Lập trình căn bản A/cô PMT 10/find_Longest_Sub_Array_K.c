#include <stdio.h>
int findLongestSubArrayK(int A[],int n,int k){
	int i,c=0;
	for(i=0;i<n;i++){
		if(A[i]==k){
			c=1;
		}
	}
	int temp=0;
	if(c==0){
		return -1;
	}else{
		for(i=0;i<n;i++){
			if(A[i]==k && A[i+1]==k){
				c++;
			}else if((A[i]!=k || A[i+1]!=k) && temp==0){
				temp=c;
				c=1;
			}else if((A[i]!=k || A[i+1]!=k) && temp!=0){
				if(c>temp){
					temp=c;
					c=1;
				}
			}
		}
		if(temp>c){
			c=temp;
		}
		return c;
	}
}
int main(){
	//nhap A[]
	int n; scanf("%d",&n);
	int i,A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	//nhap so nguyen k
	int k; scanf("%d",&k);
	//find k
	printf("%d",findLongestSubArrayK(A,n,k));
	return 0;
}
