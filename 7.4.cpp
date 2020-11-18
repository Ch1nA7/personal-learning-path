#include<stdio.h>
int main()
{
	float a [50];
	for(int i = 0;i<50;i++)
	     scanf("%f",a[i]);
    int max =a[0];
	for(int i = 1/*从一开始比*/;i<50;i++)
	{
		if(a[i]>max);
		    max=a[i];
    }
	printf("%f",max);     
	return 0;
}
