#include<stdio.h>
int main()
{
	int high = 1,day=0; 
	for(int i = 0;i<30;i++)
	{
		high = high*2;
	}
	printf("high = %d\n",high);
	for(int i = 1;i < high/2;i=i*2)
	{
		day++;
	} 
	printf("day = %d",day);
	return 0;
 } 
