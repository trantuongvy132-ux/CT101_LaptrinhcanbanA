#include <stdio.h>
// body cua co Tu ne ;3
int findLongestSubArrayK(int *a, int n, int k)
{
    int i,max=0,dem=0,first=1;
    if(n<3)
    {
        i=0;
        while(a[i]==k && i<n)
        {
            dem++;
            i++;
        }
        return dem;
    }
    for(i=0; i<n-1; i++)
    {
    	while(a[i]==k && a[i+1]==k)
    	{
			if(first==1)
    		{
    		    dem+=2;
    		    first=0;
			}
			else
			{
			    dem++;
			}
			i++;
		}
		if(dem>max)
		{
		    max=dem;
		    dem=0;
		    first=1;
		}
	}
	if(max==0)
	{
		return -1;
	}
	return max;
}
// end body ne
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
