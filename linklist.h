#pragma once//保证头文件只被编译一次
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//节点
struct LinkNode
{
	int num;
	struct LinkNode * next;
};
//初始化链表
//函数返回值的 创建好的链表的头节点
struct LinkNode * init_LinkNode();