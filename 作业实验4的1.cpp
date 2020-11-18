#include<stdio.h>
int main()
{
	int k,j;
	scanf("%d",&k);
	if(2<=k<=10000)
	{
		for(int i = 2;i <= k;i++)
		{
			while(k%i==0)
			{
			    printf("%d ",i);
			    k=k/i;
			}
		} 
	}
	return 0;
}
