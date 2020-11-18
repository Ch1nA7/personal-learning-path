#include<stdio.h>
int main()
{
	int sum,a = 3;
	for(int i = 0;i<5;i++)
	{
		sum = sum + a;
		a = 3+a*10;
	}
	printf("%d",sum);    
	return 0;
}
