#include<stdio.h>
int main()
{
	int a[10];
	for(int i = 0;i<10;i++)
	    a[i] = i;
	//��ֵ 
	for(int i = 0;i<10;i++)//�������� 
	{
		for(int j = 0;j<=i;j++)
		printf("%5d",a[j]);
		printf("\n");
    }    
	return 0;
}
 
