#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main05()
{
	FILE *fp = fopen("./a.txt", "w");
	if (NULL == fp)
	{
		perror("");
		return 0;
	}
	char buf[] = "hello\nworld";
	fputs(buf, fp);
	system("pause");
	return 0;
}