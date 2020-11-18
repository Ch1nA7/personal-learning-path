#include<stdio.h>
#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x<1)
	{
	    y=x;
	    printf("%d",y);
    }
	else if(1<=x<10)
	{
		y=2*x-1;
		printf("%d",y);
	}
	else
	{
		y=3*x-11;
		printf("%d",y);
	}    
	return 0;
}
