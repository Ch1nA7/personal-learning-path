#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个值:"); 
	scanf("%d",&a);
	int b = a/10000;
	int c = a/1000%10;
	int d = a%100/10;
	int e = a%10;
	if((b == e)&&(c == d))
	    printf("该数是回文数");
	else
	    printf("该数不是回文数");    
	return 0;
}
