#include<stdio.h>
int main()
{
	int a[3][4],ave = 0,sum = 0;
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j < 4;j++)
		scanf("%d",&a[i][j]);
	}
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j < 4;j++)
		{
			sum +=a[i][j];
		}
		ave = sum/4;
		printf("%d ",ave);
	}
	return 0;
}
