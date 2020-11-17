#include<stdio.h>
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int max = 0;
	for(int i = 0;i<9;i++)
	{
		max = i;
		for(int j = i+1;j<10;j++)
		{
			if(a[max]<a[j])
			max = j; 
		}
		if(max!=i)
		{
			int tmp = a[max];
			a[max] = a[j];
			a[j] = tmp;
		}
	}
	return 0;
} 
