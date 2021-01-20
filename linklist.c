#include "linklist.h"
#define _CRT_SECURE_NO_WARNINGS
//初始化链表
//函数返回值的 创建好的链表的头节点
struct LinkNode * init_LinkNode()
{
	struct LinkNode * pHeader=malloc(sizeof(struct LinkNode));
	if (pHeader == NULL)
	{
		return NULL;
	}
	//头节点不维护数据域
	pHeader->num = -1;
	pHeader->next = NULL;
	int val = -1;
	while (1)
	{
		printf("请插入数据，输入-1代表插入结束");
		scanf("%d",&val);

	}
	//返回给用户
	return pHeader;
}

