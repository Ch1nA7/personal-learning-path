#include<stdio.h>
#include<math.h> 
int is_prime(int x)
{
	for(int i = 2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		    return 0;
	}
	return 1;
}
int main()
{
	int a;
	scanf("%d",&a);
    if(1==is_prime(a))
		printf("�����������");
    else
	    printf("�������������");		   
	return 0;
}
