#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9};
	int kmax = 0;
	for(int i = 0;i<10-1;i++)
	{
		kmax = i;
		for(int j = i+1;j<10;j++)
		{
			if(a[kmax]<a[j])
			{
				kmax = j;
			} 
		}
		if(kmax!=i)
		{
			int tmp = a[i];
			a[i] = a[kmax];
			a[kmax] = tmp;
		}
	}
	for(int i = 0;i<10;i++)
	    printf("%d ",a[i]);
	return 0;
}
