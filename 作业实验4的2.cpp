#include<stdio.h>
int main()
{
	int j = 0;
	for(int i = 1000; i <= 2100;i++)
	{
	    if((i%4==0)&&(i%100!=0)||(i%400)==0)
		{
			printf("%d ",i);
			j++;
			if(j%15==0)
			printf("\n");
	    }  
    }
	return 0;
 } 
