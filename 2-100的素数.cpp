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
	for(int i = 2;i<=100;i++)
	{
	     if(1==is_prime(i))
	         printf("%d ",i);
    }
	return 0;
}
