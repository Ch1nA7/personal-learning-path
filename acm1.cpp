#include<stdio.h>
int main()
{
	int n;
	int sum = 0;
	scanf("%d",&n);
	if((n>=1)&&(n<=40000))
	{
	    for(int i = 1;i<=n;i++)
	        for(int j = 1;j<=n;j++)
		         sum=sum+(j+i)*(j+i);  
    }
	printf("%d",sum);    
	return 0;
 } 
