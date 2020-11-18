#include<stdio.h>
int main()
{
	long a[20]={1,1};
	for(int i = 2;i<20;i++)
	     a[i] = a[i-1] + a[i-2];
	for(int i = 0;i<20;i++)  
	printf("%ld ",a[i]);     
	return 0;
 } 
