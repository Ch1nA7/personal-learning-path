#include<stdio.h>
int main()
{
	int month;
	printf("Please input one month:"); 
	scanf("%d",&month);
	switch(month)
	{
		case 1: printf("%d���Ǵ���",month);break; 
	    case 2: printf("%d���Ǵ���",month);break;
		case 3: printf("%d���Ǵ���",month);break;
		case 4: printf("%d�����ļ�",month);break;
		case 5: printf("%d�����ļ�",month);break;
		case 6: printf("%d�����ļ�",month);break;
		case 7: printf("%d�����＾",month);break;
		case 8: printf("%d�����＾",month);break;
		case 9: printf("%d�����＾",month);break;
		case 10: printf("%d���Ƕ���",month);break;
		case 11: printf("%d���Ƕ���",month);break;
		case 12: printf("%d���Ƕ���",month);break;
		defailt:printf("Data error");break;		
	}
	return 0;
} 
