#include <stdio.h>
int main()
{
    int n,i,j,k,num=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
    	
    	for(j=1; j<=n; j++)
    	{
    		if(i%2!=0)
    		{
    			num++;
    			printf("%d ", num);
			}
			else
			{
				if(j%2==0)
				{
					break;
				}
				else
				{
					num=num+n;
					for(k=num; k>(num-n); k--)
					{
						printf("%d ", k);
					}
			    }
			}
		}
		printf("\n");
	}
    return 0;
}
