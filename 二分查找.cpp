#include<stdio.h>
void FindNum(int a[],int data)
{
	int tou = 0;
	int wei = 100-1;
	int flag = -2;
	int ci = 0;
	while(tou<=wei)
	{
		int zhong = (tou+wei)/2;
		printf("tou = %d,wei = %d,zhong = %d,ci = %d\n",tou,wei,zhong,++ci);
		if(data ==a[zhong])
		{
			printf("找到值为%d的数了",data);
			flag = 1;
			break;
		}
		else if(data>a[zhong])
		{
			tou=zhong + 1;
		}
		else
		{
			wei = zhong -1;
		}
		
	}
	if(flag == -2)
	{
		printf("找不到这个值\n"); 
	}
}
int main()
{
	int a[100] = {0};
	for(int i = 0;i<100;i++)
	{
		a[i]=i;
		printf("i=%d\n",i);
	}
	int data;
	scanf("%d",&data);
	FindNum(a,data);
	
	return 0;
}
