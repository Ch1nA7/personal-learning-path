#include<stdio.h>
int main()
{
	int a;
	printf("������һ��ֵ:"); 
	scanf("%d",&a);
	int b = a/10000;
	int c = a/1000%10;
	int d = a%100/10;
	int e = a%10;
	if((b == e)&&(c == d))
	    printf("�����ǻ�����");
	else
	    printf("�������ǻ�����");    
	return 0;
}
