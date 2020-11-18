#include<stdio.h>
int main()
{
	int z,taxes;
	scanf("%d",&z);
	if(z>10000)
	{
		taxes = z*0.05;
	}
	else if(5000<z<10000)
	{
		taxes = z*0.03;
	}
	else if(1000<z<5000)
	{
		taxes = z*0.02;
	}
	else
	{
		taxes = 0;
	}
	printf("%d",z);  
	return 0;
}
