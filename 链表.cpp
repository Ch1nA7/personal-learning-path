#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//静态链表
//节点的设计
struct LinkNode
{
	int num;
	struct LinkNode * next;
};
void test01()
{
	//节点创建
	struct LinkNode node1 = { 10, NULL };
	struct LinkNode node2 = { 20, NULL };
	struct LinkNode node3 = { 30, NULL };
	struct LinkNode node4 = { 40, NULL };
	struct LinkNode node5 = { 50, NULL };
	//建议节点之间的关系
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	//遍历链表
	struct LinkNode * pCurrent = &node1;
	while (pCurrent != NULL)
	{
		printf("%d\n", pCurrent->num);
		pCurrent = pCurrent->next;
     }
}
void test02()
{
	// 创建节点
	struct LinkNode * node1 = (LinkNode *)malloc(sizeof(struct LinkNode));
	struct LinkNode * node2 = (LinkNode *)malloc(sizeof(struct LinkNode));
	struct LinkNode * node3 = (LinkNode *)malloc(sizeof(struct LinkNode));
	struct LinkNode * node4 = (LinkNode *)malloc(sizeof(struct LinkNode));
	struct LinkNode * node5 = (LinkNode *)malloc(sizeof(struct LinkNode));
	//给每个节点建立关系以及给数据域赋值
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
	//遍历链表
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