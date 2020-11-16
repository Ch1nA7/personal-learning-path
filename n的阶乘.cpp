#include<stdio.h>
int Fac(int n)
{
	if(n<=1)
	   return 1;
	else
	   return n*Fac(n-1); 
}
int main()
{
	int a;
	scanf("%d",&a);
	int ret = Fac(a);
	printf("%d",ret);
	return 0;
}
