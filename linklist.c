#include "linklist.h"
#define _CRT_SECURE_NO_WARNINGS
//��ʼ������
//��������ֵ�� �����õ������ͷ�ڵ�
struct LinkNode * init_LinkNode()
{
	struct LinkNode * pHeader=malloc(sizeof(struct LinkNode));
	if (pHeader == NULL)
	{
		return NULL;
	}
	//ͷ�ڵ㲻ά��������
	pHeader->num = -1;
	pHeader->next = NULL;
	int val = -1;
	while (1)
	{
		printf("��������ݣ�����-1����������");
		scanf("%d",&val);

	}
	//���ظ��û�
	return pHeader;
}

