#include<stdio.h>
#define n 3
int main()
{
	int a[n][n],sum;
	printf("please input a:\n");
	for(int i = 0;i < n;i++)
	{
        for(int j = 0;j < n;j++)
        {
	        scanf("%d",&a[i][j]);
	    }
	}
	for(int i = 0;i < n;i++)
	{
		sum = sum + a[i][i];
	}
	printf("sum = %d",sum); 
	return 0;
 } 
