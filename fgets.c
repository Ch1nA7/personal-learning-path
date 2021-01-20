#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main06()
{
	FILE *fp = fopen("./a.txt", "r");
	if (fp == NULL)
	{
		perror("");
		return 0;
	}
	char buf[1024] = "";
	fgets(buf, sizeof(buf), fp);
	printf("buf = %s\n", buf);
	system("pause");
	return 0;
}