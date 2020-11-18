#include<stdio.h>
int max(int x,int y)
{
	int z;
	z = x>y?x:y;
	return z;
}
int main()
{
	int a,b;
	printf("Please input two numbers:");
	scanf("%d%d",&a,&b);
	int c =max(a,b);
	printf("max = %d",c);
	return 0;
} 
