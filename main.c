#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,x;
    int i=0,a;
    int j=0,b;
    int count=0;
    printf("Enter number of your rows :");
    scanf("%d",&n);
    printf("Enter number of your columns :");
    scanf("%d",&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{	
			printf("Enter your number in arr[%d][%d] index\n",i,j);
    		scanf("%d",&arr[i][j]);
		}
	}
	printf("Your array now is :\n");
	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{	
			printf("%d ",arr[i][j]);
   		}
   		printf("\n");
	}
	printf("Enter the number you want to search for :");
	scanf("%d",&x);
	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{	
			if(arr[i][j]==x)
			{	
				a=i;
				b=j;
				count++;
			}
   		}
	}
	if(count>0)
	{
		printf("%d already exists in this array in position arr[%d][%d]!\n",x,a,b);
	}
	else
	{
		printf("%d wasn't found in this array!\n",x);
	}
    return 0;
}

