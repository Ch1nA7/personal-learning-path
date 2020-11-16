#include<stdio.h>
int main()
{
	int a[10]={9,8,7,6,5,4,3,2,1,0};
	int min = 0;
	for(int i = 0;i<9;i++)
	{
		min = i;
		for(int j = i+1;j<10;j++)
		{
			if(a[min]>a[j])
			{
				int tmp = a[min];
				a[min] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i = 0;i<10;i++)
	    printf("%d ",a[i]);
	return 0;
}
