#pragma once//��֤ͷ�ļ�ֻ������һ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ڵ�
struct LinkNode
{
	int num;
	struct LinkNode * next;
};
//��ʼ������
//��������ֵ�� �����õ������ͷ�ڵ�
struct LinkNode * init_LinkNode();