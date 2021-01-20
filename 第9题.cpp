#include<stdio.h>
int main()
{
	int n;
	int a[16];
	scanf("%d",&n);
	for(int i = 0;i < 16;i++)
	{
		int j = n%2;
		n = n/2;
		a[i] = j;
	}
	for(int i=16;i >= 0;i--)
	    printf("%d",a[i]);
	return 0;
}
