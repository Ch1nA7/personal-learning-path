#include<stdio.h>
int swap(int*pa,int*pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n",a,b);
	swap(&a,&b);
	printf("a = %d,b = %d",a,b);
	return 0;
}
