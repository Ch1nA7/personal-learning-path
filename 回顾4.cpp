#include<stdio.h>
int main()
{
	int a[10] = {9,8,7,6,5,4,3,2,1,0};
	for(int i = 0;i < 9;i++)
	{
		for(int j = 0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(int i = 0;i<10;i++)
	    printf("%d ",a[i]);
	return 0;
}
