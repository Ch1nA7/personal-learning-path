#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��̬����
//�ڵ�����
struct LinkNode
{
	int num;
	struct LinkNode * next;
};
void test01()
{
	//�ڵ㴴��
	struct LinkNode node1 = { 10, NULL };
	struct LinkNode node2 = { 20, NULL };
	struct LinkNode node3 = { 30, NULL };
	struct LinkNode node4 = { 40, NULL };
	struct LinkNode node5 = { 50, NULL };
	//����ڵ�֮��Ĺ�ϵ
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	//��������
	struct LinkNode * pCurrent = &node1;
	while (pCurrent != NULL)
	{
		printf("%d\n", pCurrent->num);
		pCurrent = pCurrent->next;
     }
}
void test02()
{
	// �����ڵ�
	struct LinkNode * node1 = (LinkNode *)malloc(sizeof(struct LinkNode));
	struct LinkNode * node2 = (LinkNode *)malloc(sizeof(struct LinkNode));
	struct LinkNode * node3 = (LinkNode *)malloc(sizeof(struct LinkNode));
	struct LinkNode * node4 = (LinkNode *)malloc(sizeof(struct LinkNode));
	struct LinkNode * node5 = (LinkNode *)malloc(sizeof(struct LinkNode));
	//��ÿ���ڵ㽨����ϵ�Լ���������ֵ
	node1->num = 100;
	node1->next = node2;
	node2->num = 200;
	node2->next = node3;
	node3->num = 300;
	node3->next = node4;
	node4->num = 400;
	node4->next = node5;
	node5->num = 500;
	node5->next = NULL;
	//��������
	struct LinkNode * pCurrent = node1;
	while (pCurrent != NULL)
	{
		printf("%d\n", pCurrent->num);
		pCurrent = pCurrent->next;
	}
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
}
int main()
{
	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}