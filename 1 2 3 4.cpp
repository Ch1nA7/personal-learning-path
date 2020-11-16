#include<stdio.h>
int print(int a)
{
	if(a>9)
	{
		print(a/10);
	}
	printf("%d ",a%10);
}
int main()
{
	int a;
	scanf("%d",&a);
	print(a);
	return 0;
 } 
