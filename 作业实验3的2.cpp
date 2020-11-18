#include<stdio.h>
int main()
{
	float a = 2,b = 1,sum;
	for(int i = 0;i <10;i++)
	{
		sum = sum + a/b;
		a = a + b;
		b = b * 2; 
	}
	printf("%f",sum); 
	return 0;
}
