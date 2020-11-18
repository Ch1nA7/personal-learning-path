#include<stdio.h>
int main()
{
	int a[10];
	for(int i = 0;i<10;i++)
	    a[i] = i;
	//赋值 
	for(int i = 0;i<10;i++)//控制行数 
	{
		for(int j = 0;j<=i;j++)
		printf("%5d",a[j]);
		printf("\n");
    }    
	return 0;
}
 
