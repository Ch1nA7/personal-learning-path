#include<stdio.h>
int main()
{
	int a[6];
	printf("����6��������"); 
	for(int i = 0;i < 6;i++)
	     scanf("%d",&a[i]);
	for(int i = 0;i < 5;i++)
	{
		for(int j = 0;j< 5 - i;j++)
		{
			if(a[j]<a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(int i = 0;i < 6;i++)
	      printf("%d ",a[i]); 
	return 0;
} 
